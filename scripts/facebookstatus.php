<?php
include_once('facebook.php');
//$ACCESS_TOKEN=file_get_contents("accesstoken.txt");
$ACCESS_TOKEN='';
//Initiate a facebook instance
$facebook = new Facebook(array(
  'appId'  => '381555828532633',
  'secret' => '67cc53942e4ea10393bd16427970d066',
  'cookie' => true
));

//To keep this as simple as possible, we'll only be posting a message to the wall with our access token we received from accounts
 
//$fbpost=file_get_contents("status.txt",true);  
$message='Testing Dextrous';
$attachment = array('message' => $_POST['message']);

$attachment['access_token']=$_SESSION['active']['access_token'];
$result =$facebook->api('/me/feed', 'post', $attachment);
//$page_feed = $facebook->api('/me/feed','GET',array('access_token' => $_SESSION['active']['access_token']));

?>

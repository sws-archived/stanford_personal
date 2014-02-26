<?php
/**
 * @file
 * Template file for "Site Settings" page
 */

/**
 * Variables
 */
global $user;
$account = $user;
global $base_url;
$uid = $account->uid;
$username = check_plain(drupal_strip_dangerous_protocols($account->name));
$user_email = check_plain(drupal_strip_dangerous_protocols($account->mail));

/**
 * Links
 */
?>


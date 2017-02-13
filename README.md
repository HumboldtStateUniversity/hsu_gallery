# hsu_gallery
Gallery feature for openhsu.

## Dependencies
* colorbox module
* colorbox library - [https://github.com/jackmoore/colorbox/archive/1.x.zip](https://github.com/jackmoore/colorbox/archive/1.x.zip) 
* eva module
* imagecache_actions module

### Get dependencies in terminal
`drush dl eva colorbox imagecache_actions`

From your drupal site root use a series of terminal commands to download and rename the colorbox library.

* `curl -o sites/all/libraries/colorbox.zip https://codeload.github.com/jackmoore/colorbox/zip/1.x`
* `unzip sites/all/libraries/colorbox.zip -d sites/all/libraries`
* `mv sites/all/libraries/colorbox-1.x sites/all/libraries/colorbox`
* `rm sites/all/libraries/colorbox.zip`

_Note: a version of hsu_gallery is already included in cahss_core._
<?php

/**
 * @file
 * This is the inc file of the custom module.
 */

/**
 * Returns merged blocks.
 * @return $output
 */
function _merged_blocks() {
  $output = '';
  $output .= views_embed_view('blocks', 'block');
  $output .= views_embed_view('blocks', 'block_1');
  return $output;
}

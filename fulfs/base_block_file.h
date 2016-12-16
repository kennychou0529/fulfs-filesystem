#ifndef __FULFS__BASE_BLOCK_FILE__H__
#define __FULFS__BASE_BLOCK_FILE__H__

#include "superblock.h"
#include "inode.h"
#include "data_block.h"

bool base_block_file_locate(device_handle_t device,  superblock_t sb, inode_t* inode, block_no_t block_relative);
bool base_block_file_push_block(device_handle_t device, superblock_t sb, inode_t* inode, block_no_t* p_block_relative);
bool base_block_file_pop_block(device_handle_t device, superblock_t sb, inode_t* inode, block_no_t* p_block_relative);


#endif /* __FULFS__BASE_BLOCK_FILE__H__ */

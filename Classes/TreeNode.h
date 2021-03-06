//
//  TreeNode.h
//
//  Created by liaoxf on 2017/11/23.
//  Copyright © 2017年 com.mlj.FengLei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TreeNode : NSObject

@property (nonatomic) id obj;
@property (nonatomic,weak) TreeNode *parent;
@property (nonatomic) NSMutableArray *childern;

/**
 *  通过一个字典创建TreeNode
 */
+ (TreeNode *)treeNodeWithDictionary:(NSDictionary *)dic;

/**
 *  通过一个数组创建TreeNode
 */
+ (TreeNode *)treeNodeWithArray:(NSArray *)arr;

/**
 *  添加子节点
 */
- (void)addChildNode:(TreeNode *)node;

- (NSUInteger)childrenCount;

- (NSUInteger)levelCount;

- (TreeNode *)childAtIndex:(NSInteger)index;
- (TreeNode *)childWithTitle:(NSString *)title;

- (BOOL)isLeaf;
- (BOOL)isRoot;
- (NSString *)title;

@end

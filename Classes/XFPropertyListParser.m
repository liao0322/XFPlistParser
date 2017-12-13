//
//  XFPropertyListParser.m
//
//  Created by liaoxf on 2017/11/23.
//  Copyright © 2017年 com.mlj.FengLei. All rights reserved.
//

#import "XFPropertyListParser.h"

@implementation XFPropertyListParser

+ (TreeNode *)parserPListFileWithName:(NSString *)plistName {
    TreeNode *node = nil;
    NSString *filePath = [[NSBundle mainBundle] pathForResource:plistName ofType:@"plist"];
    NSDictionary *dict = [NSDictionary dictionaryWithContentsOfFile:filePath];
    if (dict) {
        node = [TreeNode treeNodeWithDictionary:dict];
    } else {
        NSArray *arr = [ NSArray arrayWithContentsOfFile:filePath];
        node = [TreeNode treeNodeWithArray:arr];
    }
    return node;
}

@end

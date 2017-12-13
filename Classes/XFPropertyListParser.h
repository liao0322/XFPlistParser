//
//  XFPropertyListParser.h
//
//  Created by liaoxf on 2017/11/23.
//  Copyright © 2017年 com.mlj.FengLei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TreeNode.h"

@interface XFPropertyListParser : NSObject
+ (TreeNode *)parserPListFileWithName:(NSString *)plistName;
@end

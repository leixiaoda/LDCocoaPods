//
//  Wrapper.m
//  SwiftPlusCPP
//
//  Created by bytedance on 2018/6/15.
//  Copyright © 2018年 radar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Wrapper.h"
#import "Parser.hpp"

//extern "C" {
//    - (NSString *)markdownToJson:(NSString *)json {
//        Sunset::markdown
//
//
//        return @""
//    }
//}

@implementation Wrapper
- (NSString *)markdownToJson:(NSString *)markdown {
    std::string json = Sunset::markdown_to_json(std::string([markdown UTF8String]));
    return [NSString stringWithCString:json.c_str() encoding:[NSString defaultCStringEncoding]];
}

@end

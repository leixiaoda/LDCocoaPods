#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "json.h"
#import "Block.hpp"
#import "Doc.hpp"
#import "Json2MarkdownParser.hpp"
#import "Style.hpp"
#import "BlockType.hpp"
#import "BodyModel.hpp"
#import "Content.hpp"
#import "GenerateId.hpp"
#import "Markup.hpp"
#import "Paragraph.hpp"
#import "Parser.hpp"
#import "Rule.hpp"
#import "wstring_utils.hpp"
#import "Wrapper.h"

FOUNDATION_EXPORT double ConverterVersionNumber;
FOUNDATION_EXPORT const unsigned char ConverterVersionString[];


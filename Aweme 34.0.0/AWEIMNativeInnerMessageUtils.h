@interface AWEIMNativeInnerMessageUtils : NSObject
+ (id)typeToComponentNameMap;
+ (unsigned long long)streamStatusOfMessage:;
+ (BOOL)isTyperTypeWithElement:;
+ (void)configSubMessage:withParentMessage:index:;
+ (id)getSizeWithOrientation:;
+ (void)updateInnerImageMessageLocalExtWithMessage:DBModel:key:;
+ (id)innerKeyWithIndex:;
+ (id)innerLocalExtInMessage:innerIndex:;
+ (id)adjustLineHeightOfAttributedString:lineHeight:;
@end

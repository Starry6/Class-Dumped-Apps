@interface AWEIMAttributedStringSize : NSObject
+ (BOOL)aweim_p_enable_useSystemLayout;
+ (id)aweim_p_boundingRectWithSize:maximumNumberOfLines:attrString:;
+ (double)aweim_p_ceilToViewScale:;
+ (id)aweim_componentText:limitedSize:maxLine:;
@end

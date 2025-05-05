@interface CTAttributedStringWrapper : NSObject
+ (id)attributedStringFromData:options:documentAttributes:error:;
+ (id)dataFromAttributedString:range:documentAttributes:error:;
+ (BOOL)containsAttachments:;
@end

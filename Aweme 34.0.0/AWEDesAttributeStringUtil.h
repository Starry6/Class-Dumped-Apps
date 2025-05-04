@interface AWEDesAttributeStringUtil : NSObject
+ (id)awe_calculateAttachmentRectWithView:alignToFont:alignment:;
+ (id)initWithView:alignToFont:alignment:;
+ (void)desAttributeString:insertView:withPosition:alignToFont:alignment:;
+ (void)desAttributeString:replaceWithView:withRange:alignToFont:alignment:;
@end

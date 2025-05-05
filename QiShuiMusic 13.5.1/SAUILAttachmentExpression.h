@interface SAUILAttachmentExpression : SAUILParseableExpression
@property (nonatomic) <SAAceSerializable> attachmentExpression;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)attachmentExpression;
- (void)setAttachmentExpression:;
+ (id)attachmentExpression;
+ (id)attachmentExpressionWithDictionary:context:;
@end

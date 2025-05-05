@interface SAUILParsedAttachmentExpression : SAUILParsedExpression
@property (nonatomic) NSData attachment;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)attachment;
- (void)setAttachment:;
+ (id)parsedAttachmentExpression;
+ (id)parsedAttachmentExpressionWithDictionary:context:;
@end

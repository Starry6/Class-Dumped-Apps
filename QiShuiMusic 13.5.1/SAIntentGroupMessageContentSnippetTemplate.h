@interface SAIntentGroupMessageContentSnippetTemplate : SAIntentGroupSnippetTemplate
@property (nonatomic) NSString content;
@property (nonatomic) BOOL sentStatus;
- (id)content;
- (void)setContent:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)sentStatus;
- (void)setSentStatus:;
+ (id)messageContentSnippetTemplate;
+ (id)messageContentSnippetTemplateWithDictionary:context:;
@end

@interface SAIntentGroupActivityIndicatorSnippetTemplate : SAIntentGroupSnippetTemplate
@property (nonatomic) NSString detailText;
- (id)groupIdentifier;
- (void)setDetailText:;
- (id)detailText;
- (id)encodedClassName;
+ (id)activityIndicatorSnippetTemplate;
+ (id)activityIndicatorSnippetTemplateWithDictionary:context:;
@end

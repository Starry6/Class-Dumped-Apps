@interface SAIntentGroupTextSnippetTemplate : SAIntentGroupSnippetTemplate
@property (nonatomic) NSString alignment;
@property (nonatomic) NSString detailText;
@property (nonatomic) NSArray labelComponents;
@property (nonatomic) BOOL showsDisclosureIndicator;
- (id)groupIdentifier;
- (void)setAlignment:;
- (void)setDetailText:;
- (id)detailText;
- (id)encodedClassName;
- (id)alignment;
- (id)labelComponents;
- (void)setLabelComponents:;
- (BOOL)showsDisclosureIndicator;
- (void)setShowsDisclosureIndicator:;
+ (id)textSnippetTemplate;
+ (id)textSnippetTemplateWithDictionary:context:;
@end

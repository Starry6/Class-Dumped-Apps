@interface SAGuidanceGuideSnippet : SAUISnippet
@property (nonatomic) SAUIButton appPunchOutButton;
@property (nonatomic) SAUIAppPunchOut appStorePunchOut;
@property (nonatomic) NSArray domainSnippets;
@property (nonatomic) NSString headerText;
@property (nonatomic) NSArray intentEnabledAppSnippets;
- (id)headerText;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setHeaderText:;
- (id)appPunchOutButton;
- (void)setAppPunchOutButton:;
- (id)appStorePunchOut;
- (void)setAppStorePunchOut:;
- (id)domainSnippets;
- (void)setDomainSnippets:;
- (id)intentEnabledAppSnippets;
- (void)setIntentEnabledAppSnippets:;
+ (id)guideSnippet;
+ (id)guideSnippetWithDictionary:context:;
@end

@interface SAUIAttributionSnippet : SAUISnippet
@property (nonatomic) SAUIAppPunchOut appPunchOut;
@property (nonatomic) BOOL showKeyLine;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)appPunchOut;
- (void)setAppPunchOut:;
- (BOOL)showKeyLine;
- (void)setShowKeyLine:;
+ (id)attributionSnippet;
+ (id)attributionSnippetWithDictionary:context:;
@end

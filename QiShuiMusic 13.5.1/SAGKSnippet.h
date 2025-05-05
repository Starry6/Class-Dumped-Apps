@interface SAGKSnippet : SAUISnippet
@property (nonatomic) SAUIAppPunchOut appPunchOut;
@property (nonatomic) NSArray pods;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)appPunchOut;
- (void)setAppPunchOut:;
- (id)pods;
- (void)setPods:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end

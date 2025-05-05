@interface SAIntentGroupAppVocabularySearchRequest : SABaseClientBoundCommand
@property (nonatomic) NSString appBundleId;
@property (nonatomic) NSString appVocabularyType;
@property (nonatomic) NSString query;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAppBundleId:;
- (id)groupIdentifier;
- (void)setQuery:;
- (id)appBundleId;
- (id)query;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)appVocabularyType;
- (void)setAppVocabularyType:;
+ (id)appVocabularySearchRequest;
+ (id)appVocabularySearchRequestWithDictionary:context:;
@end

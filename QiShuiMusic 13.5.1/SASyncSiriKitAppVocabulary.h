@interface SASyncSiriKitAppVocabulary : SADomainObject
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSDictionary customVocabularyMap;
- (id)groupIdentifier;
- (id)bundleId;
- (id)encodedClassName;
- (void)setBundleId:;
- (id)customVocabularyMap;
- (void)setCustomVocabularyMap:;
@end

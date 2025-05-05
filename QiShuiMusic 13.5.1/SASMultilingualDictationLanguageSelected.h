@interface SASMultilingualDictationLanguageSelected : SABaseCommand
@property (nonatomic) NSDictionary confidenceScoresByLanguage;
@property (nonatomic) NSString languageDetected;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)confidenceScoresByLanguage;
- (void)setConfidenceScoresByLanguage:;
- (id)languageDetected;
- (void)setLanguageDetected:;
+ (id)multilingualDictationLanguageSelected;
+ (id)multilingualDictationLanguageSelectedWithDictionary:context:;
@end

@interface MCCertificateTransparencyPayload : MCPayload
@property (nonatomic) NSArray hashDictionaries;
@property (nonatomic) NSArray domainRules;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)subtitle1Label;
- (id)hashDictionaries;
- (id)domainRules;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (BOOL)isValidDomainRule:;
+ (id)localizedSingularForm;
@end

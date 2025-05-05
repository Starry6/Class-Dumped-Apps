@interface MCChaperonePayload : MCPayload
@property (nonatomic) NSNumber nonChaperonePairingAllowedNum;
@property (nonatomic) NSData pairingCertificateData;
@property (nonatomic) BOOL nonChaperonePairingAllowed;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)pairingCertificateData;
- (BOOL)nonChaperonePairingAllowed;
- (id)nonChaperonePairingAllowedNum;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end

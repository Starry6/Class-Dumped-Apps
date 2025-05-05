@interface SASiriKitSetting : AceObject
@property (nonatomic) BOOL applySASToFirstPartyDomains;
@property (nonatomic) NSArray listOfSiriKitEnabledDomains;
@property (nonatomic) BOOL useSASAutoSelectionFeature;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)applySASToFirstPartyDomains;
- (void)setApplySASToFirstPartyDomains:;
- (id)listOfSiriKitEnabledDomains;
- (void)setListOfSiriKitEnabledDomains:;
- (BOOL)useSASAutoSelectionFeature;
- (void)setUseSASAutoSelectionFeature:;
+ (id)siriKitSetting;
+ (id)siriKitSettingWithDictionary:context:;
@end

@interface CEMPredicateCompositeBudget_Monitors : CEMPayloadBase
@property (nonatomic) NSArray payloadApps;
@property (nonatomic) NSArray payloadWebSites;
@property (nonatomic) NSArray payloadCategories;
@property (nonatomic) NSArray payloadCategoriesVersion2;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setPayloadApps:;
- (void)setPayloadCategories:;
- (void)setPayloadCategoriesVersion2:;
- (id)payloadCategories;
- (id)payloadCategoriesVersion2;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadApps;
- (id)payloadWebSites;
- (void)setPayloadWebSites:;
+ (id)buildWithApps:withWebSites:withCategories:withCategoriesVersion2:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithApps:withWebSites:withCategories:;
@end

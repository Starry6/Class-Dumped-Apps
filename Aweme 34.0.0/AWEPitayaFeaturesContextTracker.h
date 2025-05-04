@interface AWEPitayaFeaturesContextTracker : HTSService
@property (nonatomic) NSMutableDictionary instanceDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)fillFeatures:withModel:config:;
- (id)getBatchFeature:;
- (id)getSchemaFeature:;
- (id)getKVStoreFeature:;
- (id)getCloudFeature:;
- (id)getFeature:params:;
- (id)getStoreFeatureValuesWithBusiness:type:featureNames:;
- (id)getStoreFeatureValuesWithBusiness:type:;
- (id)getCloudUserFeatureWithBusinessName:featureName:;
- (id)getUEInstanceWithBusinessName:featureName:;
- (id)instanceDict;
- (id)getCachedInstanceWithType:businessName:;
- (void)setCachedInstance:type:businessName:;
- (id)getMemoryCacheInstanceWithBusinessName:;
- (id)getKVStoreInstanceWithBusinessName:;
- (void)setInstanceDict:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end

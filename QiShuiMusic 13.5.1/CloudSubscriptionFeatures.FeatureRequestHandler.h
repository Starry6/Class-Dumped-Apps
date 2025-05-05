@interface CloudSubscriptionFeatures.FeatureRequestHandler : NSObject
- (id)init;
- (void)requestFeatureWithId:ignoreCache:completion:;
- (void)requestGeoClassificationFor:bundleID:altDSID:ignoreCache:completion:;
- (void)getFeatureEligibilityFor:bundleID:completion:;
- (void).cxx_destruct;
- (void)clearCacheAndNotify;
@end

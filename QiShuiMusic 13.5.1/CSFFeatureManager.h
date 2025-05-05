@interface CSFFeatureManager : NSObject
+ (void)requestFeatureWithId:completion:;
+ (void)unregisterForFeatureChangeNotificationsUsingObserver:;
+ (void)refreshAllGeoclassificationCache;
+ (void)requestGeoClassificationForFeatureID:bundleID:altDSID:ignoreCache:completion:;
+ (id)addFeatureChangeObserverWithChange:;
+ (id)registerForFeatureChangeNotificationsUsingBlock:;
+ (void)removeFeatureChangeObserverWithToken:;
+ (BOOL)isCloudSubscriber;
+ (void)processPushNotificationDictionary:;
+ (void)requestGeoClassificationForFeatureID:bundleID:ignoreCache:completion:;
+ (void)clearFeatureCacheAndNotify;
+ (void)clearCacheAndNotify;
+ (void)getFeatureEligibilityForFeatureWithId:bundleId:completion:;
+ (void)refreshGeoclassificationCache;
+ (void)processPushNotificationWithDictionary:;
@end

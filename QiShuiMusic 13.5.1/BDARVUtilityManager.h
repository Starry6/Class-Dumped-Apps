@interface BDARVUtilityManager : NSObject
+ (void)newPreloadAppStoreWithModel:sourceModel:adType:;
+ (void)newPreloadAppStoreWithModel:sourceModel:adType:atTime:;
+ (void)oldPreloadAppStoreWithModel:;
+ (BOOL)openAppStoreWithParam:;
+ (void)sendEndSKANImpression:;
+ (void)sendStartSKANImpression:;
@end

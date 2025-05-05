@interface BDLBeaconCache : NSObject
+ (long long)cachedErrorCode;
+ (id)cachedBeaconLogID;
+ (id)cachedBeacons;
+ (void)removeBeaconsCache;
+ (void)removeLogIDCache;
+ (void)saveBeaconLogID:;
+ (void)saveBeacons:;
+ (void)saveErrorCode:;
@end

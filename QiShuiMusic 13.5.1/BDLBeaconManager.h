@interface BDLBeaconManager : NSObject
@property (nonatomic) BDUGLocationBeaconTask task;
@property (nonatomic) q errorCode;
- (BOOL)isDisabledBLE;
- (void)scanningCheck;
- (void)startWithUuids:logID:interval:isSubmitBleNow:;
- (id)init;
- (long long)errorCode;
- (id)task;
- (void)setTask:;
- (void)setErrorCode:;
- (void).cxx_destruct;
+ (id)_getScannedBeaconsParamsWithBeacons:;
+ (id)logId;
+ (void)removeBeaconsDiskCache;
+ (id)scannedBeacons;
+ (id)sharedManager;
@end

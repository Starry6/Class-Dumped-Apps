@interface SASExpressCloudSettings : NSObject
@property (nonatomic) SASCloudKitClient cloudKitClient;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)init;
- (void)setXpcActivity:;
- (id)initWithContainerIdentifier:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)fetchSettingsWithCompletion:;
- (void)updateSettings:withCompletion:;
- (void)_setupRecordZoneWithName:completion:;
- (id)_createSettingsRecordInZoneID:forDeviceID:;
- (void)_fetchAppropriateSettingsWithCompletion:;
- (id)cloudKitClient;
- (void)setCloudKitClient:;
+ (BOOL)_isCloudKitError:;
+ (id)_queryForSettingsForDeviceID:;
+ (id)_queryForSettingsFromPastMonthForPlatform:;
+ (id)_queryForSettingsFromPastMonthForDeviceClass:;
+ (id)_queryForSettingsFromPastMonth;
+ (id)_predicateForRecordsModifiedInPastMonth;
+ (id)_zoneForSettings;
@end

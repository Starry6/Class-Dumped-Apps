@interface NRMigrator : NSObject
@property (nonatomic) BOOL migrationIsAvailable;
@property (nonatomic) NSArray devicesExpectedToBeMigratableAfterRestore;
@property (nonatomic) NSArray migratableDevicesRequiringConsent;
@property (nonatomic) NSArray migratableDevices;
@property (nonatomic) NRDevice migratingDevice;
- (id)migratableDevicesRequiringConsent;
- (id)migrationConsentRequestData;
- (void)enterPreMigrationMode;
- (BOOL)migrationIsAvailable;
- (id)lastMigrationRequestPhoneName;
- (id)devicesFromMigrationConsentRequestData:;
- (id)migratingDevice;
- (void).cxx_destruct;
- (void)beginMigrationWithDevice:passcode:withBlock:;
- (id)devicesExpectedToBeMigratableAfterRestore;
- (id)migratableDevices;
- (void)setMigrationConsented:forDeviceID:withBlock:;
- (void)isPhoneReadyToMigrateDevice:withCompletion:;
- (void)beginMigrationWithDevice:withCompletion:;
- (void)setMigrationConsented:forDevice:withBlock:;
+ (id)sharedMigrator;
+ (void)ingestPostRestoreMigrationDataForConsentedDevices:;
+ (id)migrationDataPreRestoreForConsentedDevices:;
@end

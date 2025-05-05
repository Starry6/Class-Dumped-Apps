@interface MBPrebuddyManager : NSObject
@property (nonatomic) MBManagerClient managerClient;
@property (nonatomic) NSObject<MBManagerDelegate> delegate;
@property (nonatomic) BOOL prebuddyMode;
- (id)init;
- (void)setDelegate:;
- (id)dateOfLastBackup;
- (id)delegate;
- (void).cxx_destruct;
- (void)turnOnBackup;
- (void)signalPrebuddy:;
- (void)extendPrebuddy:completion:;
- (void)prebuddyBackupDeleted:;
- (void)cancelPrebuddy;
- (void)cancelPrebuddyOnAccountSignOut;
- (void)beginPrebuddyBackupFromManualSignal:;
- (BOOL)beginPrebuddyBackupFromManualSignal:error:;
- (void)followupAction:;
- (BOOL)isPrebuddyMode;
- (void)updateFollowUp;
- (void)shortenPrebuddyExpiration;
- (id)managerClient;
- (void)setManagerClient:;
+ (id)sharedManager;
+ (id)twoDeviceImageName;
+ (id)backupToCloudImageName;
+ (id)baseFollowupItem;
+ (BOOL)hasPrebuddyFollowUp;
@end

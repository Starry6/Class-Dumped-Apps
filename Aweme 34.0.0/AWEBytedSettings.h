@interface AWEBytedSettings : AWEBaseSettings
@property (nonatomic) Q lastTimestamp;
@property (nonatomic) <AWEBytedSettingsSetupDelegate> setupDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchSettings;
- (void)fetchSettingsWithHeaders:;
- (id)init;
- (void)setLastTimestamp:;
- (void).cxx_destruct;
- (unsigned long long)lastTimestamp;
- (void)updateSettings:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setSetupDelegate:;
- (id)setupDelegate;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end

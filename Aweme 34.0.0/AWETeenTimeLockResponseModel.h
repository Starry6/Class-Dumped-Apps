@interface AWETeenTimeLockResponseModel : AWEBaseApiModel
@property (nonatomic) AWETeenTimeLockScreenTimeSettingsModel timeLockSettings;
@property (nonatomic) BOOL useLocalTimeZone;
@property (nonatomic) AWETeenPendantModel pendantSettings;
- (id)pendantSettings;
- (void)setPendantSettings:;
- (id)timeLockSettings;
- (BOOL)useLocalTimeZone;
- (void)setTimeLockSettings:;
- (void)setUseLocalTimeZone:;
- (void).cxx_destruct;
+ (id)timeLockSettingsJSONTransformer;
+ (id)pendantSettingsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

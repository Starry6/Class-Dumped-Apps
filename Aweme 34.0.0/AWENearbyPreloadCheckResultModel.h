@interface AWENearbyPreloadCheckResultModel : NSObject
@property (nonatomic) NSString errorMessage;
@property (nonatomic) BOOL feedCacheEnable;
@property (nonatomic) BOOL settingCacheEnable;
@property (nonatomic) NSError settingsError;
@property (nonatomic) NSError feedError;
@property (nonatomic) BOOL bSettingCompleteFlag;
@property (nonatomic) BOOL bFeedCompleteFlag;
- (BOOL)feedCacheEnable;
- (void)setFeedCacheEnable:;
- (BOOL)settingCacheEnable;
- (void)setSettingCacheEnable:;
- (id)settingsError;
- (void)setSettingsError:;
- (id)feedError;
- (void)setFeedError:;
- (BOOL)bSettingCompleteFlag;
- (void)setBSettingCompleteFlag:;
- (BOOL)bFeedCompleteFlag;
- (void)setBFeedCompleteFlag:;
- (id)errorMessage;
- (void).cxx_destruct;
- (void)setErrorMessage:;
@end

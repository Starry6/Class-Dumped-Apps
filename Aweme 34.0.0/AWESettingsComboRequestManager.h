@interface AWESettingsComboRequestManager : NSObject
@property (nonatomic) NSMutableArray businessSettingsClassArray;
- (BOOL)isLaunchCompletionOptimizationEnabled;
- (void)registerBusinessSettingsClass:;
- (id)bizDowngradeSettingsAsyncList;
- (BOOL)bizDowngradeAsyncSettingsDictUpdate;
- (BOOL)bizDowngradeIfAsyncWithClassName:;
- (void)sendRequestComboSettings;
- (id)businessSettingsClassArray;
- (void)processResponseData:error:settings:;
- (void)check_runloopFree:;
- (BOOL)p_saveRespServerTimeIfNeeded:;
- (void)setBusinessSettingsClassArray:;
- (void)fetchComboSettings;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

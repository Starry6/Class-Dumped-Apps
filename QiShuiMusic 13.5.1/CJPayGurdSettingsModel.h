@interface CJPayGurdSettingsModel : JSONModel
@property (nonatomic) BOOL offlineRollback;
@property (nonatomic) BOOL isMergeRequest;
@property (nonatomic) CJPayFalconSettingsModel falconSettings;
- (BOOL)offlineRollback;
- (id)falconSettings;
- (BOOL)isMergeRequest;
- (void)setFalconSettings:;
- (void)setIsMergeRequest:;
- (void)setOfflineRollback:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

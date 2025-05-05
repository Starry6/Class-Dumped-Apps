@interface BDUGLuckyDogCommonResponseModel : BDUGLuckyJSONModel
@property (nonatomic) q settingsVersion;
@property (nonatomic) BOOL isAppLogin;
@property (nonatomic) NSString actToken;
@property (nonatomic) NSString actBase;
@property (nonatomic) NSString actData;
@property (nonatomic) NSArray<BDUGLuckyDogActivityInfo> activityInfos;
- (id)actBase;
- (id)actData;
- (id)actToken;
- (id)activityInfos;
- (BOOL)isAppLogin;
- (void)setActBase:;
- (void)setActData:;
- (void)setActToken:;
- (void)setActivityInfos:;
- (void)setIsAppLogin:;
- (long long)settingsVersion;
- (void)setSettingsVersion:;
- (void).cxx_destruct;
@end

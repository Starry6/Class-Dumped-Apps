@interface BDUGLuckyResponseCommon : BDUGLuckyJSONModel
@property (nonatomic) NSString sdkVersion;
@property (nonatomic) q settingsVersion;
@property (nonatomic) NSString actBase;
@property (nonatomic) NSString actData;
@property (nonatomic) NSString actToken;
@property (nonatomic) NSArray<BDUGLuckyActivityInfo> activityInfos;
@property (nonatomic) BOOL isAppLogin;
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
- (id)sdkVersion;
- (void)setSdkVersion:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end

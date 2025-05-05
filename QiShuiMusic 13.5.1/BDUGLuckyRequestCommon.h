@interface BDUGLuckyRequestCommon : BDUGLuckyJSONModel
@property (nonatomic) NSString sdkVersion;
@property (nonatomic) q settingsVersion;
@property (nonatomic) NSString actBase;
@property (nonatomic) NSString actData;
@property (nonatomic) NSString actToken;
- (id)actBase;
- (id)actData;
- (id)actToken;
- (void)setActBase:;
- (void)setActData:;
- (void)setActToken:;
- (long long)settingsVersion;
- (void)setSettingsVersion:;
- (void).cxx_destruct;
- (id)sdkVersion;
- (void)setSdkVersion:;
+ (id)modelCustomPropertyMapper;
@end

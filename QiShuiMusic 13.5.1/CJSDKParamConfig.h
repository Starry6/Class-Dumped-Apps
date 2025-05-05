@interface CJSDKParamConfig : NSObject
@property (nonatomic) NSString version;
@property (nonatomic) NSString settingsVersion;
@property (nonatomic) NSString sdkName;
@property (nonatomic) NSString merchantId;
- (id)sdkName;
- (void)setSdkName:;
- (id)settingsVersion;
- (void)setSettingsVersion:;
- (void)setVersion:;
- (id)version;
- (void).cxx_destruct;
- (id)merchantId;
- (void)setMerchantId:;
+ (id)defaultConfig;
@end

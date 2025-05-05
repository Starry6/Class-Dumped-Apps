@interface IESECMallShopMomentContext : NSObject
@property (nonatomic) NSDictionary momentConfig;
@property (nonatomic) Q geckoVersion;
@property (nonatomic) IESECMallShopMomentPerfInfo perfInfo;
@property (nonatomic) <IESECMallChannelConfigProtocol> mallConfig;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) NSDictionary themeInfo;
@property (nonatomic) Q style;
- (unsigned long long)geckoVersion;
- (id)logExtra;
- (id)mallConfig;
- (id)momentConfig;
- (id)perfInfo;
- (void)setGeckoVersion:;
- (void)setLogExtra:;
- (void)setMallConfig:;
- (void)setMomentConfig:;
- (void)setPerfInfo:;
- (void)setThemeInfo:;
- (id)themeInfo;
- (id)init;
- (void)setStyle:;
- (void).cxx_destruct;
- (unsigned long long)style;
@end

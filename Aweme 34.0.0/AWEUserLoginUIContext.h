@interface AWEUserLoginUIContext : NSObject
@property (nonatomic) NSString loginTitle;
@property (nonatomic) NSObject<AWEUserLoginUILayoutConfig> layoutConfig;
@property (nonatomic) NSObject<AWEUserLoginUIAmbientConfig> ambientConfig;
- (void)setLayoutConfig:;
- (id)loginTitle;
- (void)setLoginTitle:;
- (id)ambientConfig;
- (void)setAmbientConfig:;
- (void).cxx_destruct;
- (id)layoutConfig;
@end

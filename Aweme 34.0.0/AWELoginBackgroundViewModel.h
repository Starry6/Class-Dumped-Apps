@interface AWELoginBackgroundViewModel : NSObject
@property (nonatomic) NSObject<AWEUserLoginUILayoutConfig> layoutConfig;
@property (nonatomic) NSObject<AWEUserLoginUIAmbientConfig> ambientConfig;
@property (nonatomic) AWEUserContext userContext;
- (void)setLayoutConfig:;
- (id)ambientConfig;
- (void)setAmbientConfig:;
- (void)setUserContext:;
- (id)userContext;
- (void).cxx_destruct;
- (id)layoutConfig;
@end

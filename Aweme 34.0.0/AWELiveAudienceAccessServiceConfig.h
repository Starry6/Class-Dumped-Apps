@interface AWELiveAudienceAccessServiceConfig : NSObject
@property (nonatomic) AWELiveAudienceAccessServiceInfraConfig infraConfig;
@property (nonatomic) AWELiveAudienceAccessServicePlayerConfig playerConfig;
@property (nonatomic) AWELiveAudienceAccessServiceStyleConfig styleConfig;
@property (nonatomic) AWELiveAudienceAccessServiceCoreConfig coreConfig;
@property (nonatomic) AWELiveAudienceAccessServiceComponentConfig componentConfig;
- (id)componentConfig;
- (void)setStyleConfig:;
- (id)styleConfig;
- (void)setPlayerConfig:;
- (id)playerConfig;
- (void)setComponentConfig:;
- (void)setInfraConfig:;
- (id)infraConfig;
- (void).cxx_destruct;
- (id)coreConfig;
- (void)setCoreConfig:;
@end

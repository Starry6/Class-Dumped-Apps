@interface AWESearchStandardVideoPlayerComponentModel : AWESearchComponentBasicModel
@property (nonatomic) Q radiusType;
@property (nonatomic) AWESearchStandardVideoPlayerCutRatioConfig cutRatioConfig;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWESearchPlayerInteractorComponentModel playerInteractorModel;
- (id)aweme;
- (void)setAweme:;
- (void)setRadiusType:;
- (id)playerInteractorModel;
- (id)cutRatioConfig;
- (void)setCutRatioConfig:;
- (void)setPlayerInteractorModel:;
- (unsigned long long)radiusType;
- (void).cxx_destruct;
@end

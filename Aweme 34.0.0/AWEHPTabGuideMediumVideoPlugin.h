@interface AWEHPTabGuideMediumVideoPlugin : NSObject
@property (nonatomic) AWEAwemeModel lastShowAwemeModel;
@property (nonatomic) BOOL shouldPrepareLanding;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidShowWithInfo:context:container:;
- (void)componentDidClickWithInfo:context:container:;
- (id)customTrackParamsWithInfo:context:;
- (id)customRouterParamsWithInfo:urlString:context:;
- (id)lastShowAwemeModel;
- (void)setLastShowAwemeModel:;
- (void)setShouldPrepareLanding:;
- (id)buildFeatureParamsWithInfo:context:;
- (BOOL)isUgClientFeatureEnable;
- (long long)currentVideoPlayDuration:;
- (BOOL)shouldPrepareLanding;
- (void).cxx_destruct;
@end

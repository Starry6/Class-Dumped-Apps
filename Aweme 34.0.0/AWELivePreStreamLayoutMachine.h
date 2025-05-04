@interface AWELivePreStreamLayoutMachine : IESLiveStreamUnifyBaseLayoutMachine
@property (nonatomic) BOOL isNeedUpdateMultiLinkerLayout;
@property (nonatomic) NSArray multiLinkerGridRatioFrames;
@property (nonatomic) double multiLinkerDistance;
@property (nonatomic) @ pkLinkerLayoutProvider;
@property (nonatomic) @ linkerLayoutProvider;
- (double)multiLinkerDistance;
- (id)multiLinkerGridRatioFrames;
- (void)setMultiLinkerDistance:;
- (void)setMultiLinkerGridRatioFrames:;
- (id)customLayouts;
- (id)supportSEILayoutTypes;
- (BOOL)isNeedUpdateMultiLinkerLayout;
- (void)setIsNeedUpdateMultiLinkerLayout:;
- (id)pkLinkerLayoutProvider;
- (void)setPkLinkerLayoutProvider:;
- (id)linkerLayoutProvider;
- (void)setLinkerLayoutProvider:;
- (void).cxx_destruct;
@end

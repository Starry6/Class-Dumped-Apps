@interface AWEPadRetryGuideComponent : ACCFeatureComponent
@property (nonatomic) UIView guideContainer;
@property (nonatomic) UILabel guideLabel;
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
@property (nonatomic) BOOL hasLoaded;
- (id)guideLabel;
- (void)setGuideLabel:;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (BOOL)isCurrentLandscape;
- (void)loadComponentView;
- (id)guideContainer;
- (void)setGuideContainer:;
- (void).cxx_destruct;
- (BOOL)hasLoaded;
- (void)setViewContainer:;
- (id)viewContainer;
- (void)setHasLoaded:;
@end

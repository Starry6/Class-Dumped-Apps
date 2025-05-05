@interface BDASplashComplianceBaseView : UIView
@property (nonatomic) BDASplashComplianceViewHolder viewHolder;
@property (nonatomic) NSDictionary config;
@property (nonatomic) q viewState;
@property (nonatomic) q gestureState;
- (id)getSpecificControlsForAnimation;
- (void)applyGreyThemeWithImage:;
- (void)baseClickGesture:;
- (void)baseOtherClickGesture:;
- (id)getInteractionView;
- (id)initWithFrame:viewHolder:viewModel:;
- (void)setViewHolder:;
- (void)splashInvalidClickWithPoint:;
- (void)splashJump;
- (void)splashValidClickWithPoint:;
- (void)updateGuideViewState:;
- (id)viewHolder;
- (BOOL)whetherPostponeSplashView;
- (void)setConfig:;
- (void)stop;
- (void)show;
- (void).cxx_destruct;
- (void)pause;
- (id)config;
- (long long)viewState;
- (void)setViewState:;
- (void)setGestureState:;
- (long long)gestureState;
@end

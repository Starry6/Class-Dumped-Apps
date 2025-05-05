@interface BDASplashBaseView : UIView
@property (nonatomic) q viewState;
- (BOOL)stop;
- (BOOL)show;
- (id)initWithFrame:;
- (BOOL)update;
- (BOOL)pause;
- (long long)viewState;
- (void)setViewState:;
@end

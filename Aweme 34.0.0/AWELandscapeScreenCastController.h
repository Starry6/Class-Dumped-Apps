@interface AWELandscapeScreenCastController : AWELandscapeInteractionBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHide:;
- (BOOL)isShowingScreenCastWithControlView:;
- (void)showScreenCastControlView:show:;
- (void)updateState:;
- (void)viewDidLoad;
@end

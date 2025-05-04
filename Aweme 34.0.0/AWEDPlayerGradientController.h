@interface AWEDPlayerGradientController : AWEDPlayerInteractionBaseController
@property (nonatomic) AWEGradientView topGradientView;
@property (nonatomic) AWEGradientView bottomGradientView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)activateType;
- (void)setupContextHandler;
- (void)updateDPlayerState:;
- (void)showTopGradientView:;
- (void)showBottomGradientView:;
- (BOOL)canShowTopGradientView;
- (BOOL)canShowBottomGradientView;
- (id)gradientBeginColor;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)gradientEndColor;
- (id)bottomGradientView;
- (void)setBottomGradientView:;
- (id)topGradientView;
- (void)setTopGradientView:;
@end

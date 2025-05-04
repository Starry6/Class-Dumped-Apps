@interface AWEPlayInteractionWatchVideoLaterElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIControl bgView;
@property (nonatomic) UIView bgSubView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (void)handleWatchLaterInfoChangeNotification:;
- (BOOL)watchVideoLaterBizSceneEnable;
- (id)mvchannelRevisitVideoConfig;
- (id)bgSubView;
- (void)trackElementShow;
- (void)setBgSubView:;
- (void)viewDidLoad;
- (void)setTitleLabel:;
- (void)onTapAction;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)bgView;
- (void)setBgView:;
+ (id)activateInfoWithContext:;
+ (BOOL)watchVideoLaterBizSceneEnableWithContext:;
@end

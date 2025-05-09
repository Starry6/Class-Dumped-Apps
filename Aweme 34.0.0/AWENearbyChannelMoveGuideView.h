@interface AWENearbyChannelMoveGuideView : UIView
@property (nonatomic) UIView animationArea;
@property (nonatomic) UIImageView triangleImgView;
@property (nonatomic) UIButton clickAreaBtn;
@property (nonatomic) UIButton confirmBtn;
@property (nonatomic) UIButton knownTipsBtn;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton blackTransparentView;
@property (nonatomic) AWEGradientView highlightGradientView;
@property (nonatomic) UIButton grouponTabBtn;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} transformerRect;
@property (nonatomic) AWEAlertNearbyFirstMoveGuideEvent event;
@property (nonatomic) NSTimer timer;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) AWENearbyGuideModel guideModel;
- (id)guideModel;
- (void)setGuideModel:;
- (id)confirmBtn;
- (void)setConfirmBtn:;
- (void)configUI;
- (void)setTransformerRect:;
- (void)doHideAnimOfButtonWithBlk:;
- (id)highlightGradientView;
- (id)transformerRect;
- (void)showTransparentAreaWithTargetView:;
- (void)doHideImmediately;
- (id)blackTransparentView;
- (id)grouponTabBtn;
- (void)setHighlightGradientView:;
- (id)triangleImgView;
- (id)animationArea;
- (id)clickAreaBtn;
- (id)knownTipsBtn;
- (void)trackGuideClickEventWithAreaInfo:;
- (void)blackTransparentViewClicked:;
- (void)userDidClickBtn:;
- (void)userClickCloseBtn:;
- (id)initWithFrame:rect:;
- (void)startDisappearTimer;
- (void)updateTransparentAreaRect:;
- (void)setAnimationArea:;
- (void)setTriangleImgView:;
- (void)setClickAreaBtn:;
- (void)setKnownTipsBtn:;
- (void)setBlackTransparentView:;
- (void)setGrouponTabBtn:;
- (void)setTimer:;
- (void)dealloc;
- (id)timer;
- (void)setEvent:;
- (BOOL)isDismissing;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)event;
- (void)setupUI;
- (void)setIsDismissing:;
@end

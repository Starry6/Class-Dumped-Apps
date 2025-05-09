@interface IESLiveUnifiedGiftComboView : UIView
@property (nonatomic) UIImageView iconTextView;
@property (nonatomic) UIView backGroundView;
@property (nonatomic) CALayer backGroundProLayer;
@property (nonatomic) UIView backGroundViewContainer;
@property (nonatomic) UIView rippleContainer;
@property (nonatomic) UIImageView progressContainer;
@property (nonatomic) UIView progressView;
@property (nonatomic) CAShapeLayer progressMaskLayer;
@property (nonatomic) CALayer progressRedLayer;
@property (nonatomic) CALayer progressYelloLayer;
@property (nonatomic) CALayer progressMixLayer;
@property (nonatomic) UIView flyArrowContainer;
@property (nonatomic) IESLiveAnimatedImageView flyArrowPlayer;
@property (nonatomic) UIImageView countDownNumber;
@property (nonatomic) NSArray countDownNumberImages;
@property (nonatomic) UIImageView hugeText;
@property (nonatomic) UIImageView hintHugeText;
@property (nonatomic) UIImageView sendTogherHintText;
@property (nonatomic) UIView comboNumberContainer;
@property (nonatomic) CAGradientLayer comboNumberBackLayer;
@property (nonatomic) HTSLiveArtTextLabel comboNumberLabel;
@property (nonatomic) BOOL disableComboNumberContainerAppearAnimation;
@property (nonatomic) IESLiveGiftPanelDataSharing giftPanelDataSharing;
@property (nonatomic) IESLiveCountTimer countDownNumberTimer;
@property (nonatomic) IESLiveCountTimer iconTextCountDownTimer;
@property (nonatomic) IESLiveCountTimer disappearTimer;
@property (nonatomic) IESLiveCountTimer comboNumberContainerRemovedTimer;
@property (nonatomic) NSMutableArray clickTime;
@property (nonatomic) NSInteger startReadSecond;
@property (nonatomic) NSInteger curReadSecond;
@property (nonatomic) double displayDuration;
@property (nonatomic) BOOL newPressCome;
@property (nonatomic) NSInteger flyWebpStatus;
@property (nonatomic) NSInteger currentShowingTextNumber;
@property (nonatomic) double lastClickTime;
@property (nonatomic) <IESLiveUnifiedGiftComboViewDelegate> delegate;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) BOOL extraHintAnimating;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)displayDuration;
- (id)getFlyAnimation;
- (void)removeOtherText;
- (id)rippleContainer;
- (int)startReadSecond;
- (id)countDownNumber;
- (id)backGroundProLayer;
- (id)backGroundView;
- (id)backGroundViewContainer;
- (id)bigGiftFlyAnimation;
- (void)cancelAllAnimation;
- (id)clickTime;
- (id)comboNumberBackLayer;
- (id)comboNumberContainer;
- (id)comboNumberContainerRemovedTimer;
- (id)comboNumberLabel;
- (id)countDownNumberImages;
- (id)countDownNumberTimer;
- (int)curReadSecond;
- (int)currentShowingTextNumber;
- (BOOL)disableComboNumberContainerAppearAnimation;
- (id)disappearTimer;
- (BOOL)extraHintAnimating;
- (id)flyArrowContainer;
- (id)flyArrowPlayer;
- (int)flyWebpStatus;
- (double)getAlpha;
- (id)giftPanelDataSharing;
- (void)hideComboNumberContainerWithCompletion:;
- (void)hideFlyAnimation;
- (id)hintHugeText;
- (id)hugeText;
- (id)iconTextCountDownTimer;
- (id)iconTextView;
- (void)impact;
- (double)lastClickTime;
- (BOOL)newPressCome;
- (void)p_doComboNumberContainerAppearAnimation;
- (void)p_doComboNumberContainerDisappearAnimation;
- (void)p_doComboNumberLabelAnimation;
- (void)p_doCountDownNumberAnimation;
- (void)p_doIconTextCountDownAnimation;
- (void)p_startHintHugeTextAnimation;
- (void)p_startHugeTextAnimation;
- (void)p_startSendTogetherHintAnimationWithNormalHint:;
- (id)progressContainer;
- (id)progressMixLayer;
- (id)progressRedLayer;
- (id)progressYelloLayer;
- (id)sendTogherHintText;
- (void)setBackGroundProLayer:;
- (void)setBackGroundView:;
- (void)setBackGroundViewContainer:;
- (void)setClickTime:;
- (void)setComboNumberBackLayer:;
- (void)setComboNumberContainer:;
- (void)setComboNumberContainerRemovedTimer:;
- (void)setComboNumberLabel:;
- (void)setCountDownNumber:;
- (void)setCountDownNumberImages:;
- (void)setCountDownNumberTimer:;
- (void)setCurReadSecond:;
- (void)setCurrentShowingTextNumber:;
- (void)setDisableComboNumberContainerAppearAnimation:;
- (void)setDisappearTimer:;
- (void)setDisplayDuration:;
- (void)setExtraHintAnimating:;
- (void)setFlyArrowContainer:;
- (void)setFlyArrowPlayer:;
- (void)setFlyWebpStatus:;
- (void)setGiftPanelDataSharing:;
- (void)setHintHugeText:;
- (void)setHugeText:;
- (void)setIconTextCountDownTimer:;
- (void)setIconTextView:;
- (void)setLastClickTime:;
- (void)setNewPressCome:;
- (void)setProgressContainer:;
- (void)setProgressMixLayer:;
- (void)setProgressRedLayer:;
- (void)setProgressYelloLayer:;
- (void)setRippleContainer:;
- (void)setSendTogherHintText:;
- (void)setStartReadSecond:;
- (void)showHintHugeTextWithURL:;
- (void)showHugeTextWithURL:;
- (void)showSendTogetherHintTextWithURL:isNormalHint:;
- (id)smallGiftFlyAnimation;
- (void)startComboNumberAnimation;
- (void)startComboNumberContainerRemovedTimer;
- (void)startCountDownNumberTimer;
- (void)startFlyArrowAnimation;
- (void)startIconTextCountDownTimer;
- (void)startNormalDisappearTimer;
- (void)startPressAnimation;
- (void)startProgressAnimation;
- (void)startRemoveAnimation;
- (void)startRippleAnimation;
- (void)dismiss;
- (void)dealloc;
- (void)setDelegate:;
- (void)setProgressView:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (id)progressView;
- (id)actionButton;
- (void)setActionButton:;
- (void)setUpUI;
- (id)progressMaskLayer;
- (void)setProgressMaskLayer:;
@end

@interface AWESearchCardPlayAccelerateManager : NSObject
@property (nonatomic) LOTAnimationView speedTipsLOTAnimation;
@property (nonatomic) UILabel adsSpeedTipsLabel;
@property (nonatomic) NSMutableArray sidePressViewArray;
@property (nonatomic) UIView guideAnimMaskView;
@property (nonatomic) UIView guideBackgroundView;
@property (nonatomic) UILabel guideAnimTipsLabel;
@property (nonatomic) LOTAnimationView guidePressLOTAnimation;
@property (nonatomic) AWESearchLongPressGuideoEllipseSideView leftEllipseView;
@property (nonatomic) AWESearchLongPressGuideoEllipseSideView rightElipseView;
@property (nonatomic) NSTimer accelrateTipsTimer;
@property (nonatomic) NSTimer guideGestureTimer;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UILongPressGestureRecognizer leftLongPressGesture;
@property (nonatomic) UILongPressGestureRecognizer rightLongPressGesture;
@property (nonatomic) UITapGestureRecognizer leftTapPressGesture;
@property (nonatomic) UITapGestureRecognizer rightTapPressGesture;
@property (nonatomic) @? startLongPressAccelerateBlock;
@property (nonatomic) @? endLongPressAccelerateBlock;
@property (nonatomic) @? sideSingleTappdBlock;
@property (nonatomic) NSMutableDictionary searchParams;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)searchParams;
- (void)setSearchParams:;
- (id)guideBackgroundView;
- (void)setGuideBackgroundView:;
- (void)triggerGuideAnimation;
- (void)disableLongPress:;
- (void)updateAccelerateSubviewWithFrame:avoidColletion:;
- (void)addGuideAnimViewForPlayerView:;
- (void)updateGuideAnimWithFrame:;
- (void)addLongPresSpeedForPlayerView:;
- (void)setStartLongPressAccelerateBlock:;
- (void)setEndLongPressAccelerateBlock:;
- (void)setSideSingleTappdBlock:;
- (void)cancelGuideAnimation;
- (BOOL)isSpeedRateTipStyleDefault;
- (id)sidePressViewArray;
- (void)p_removeLongPressSubviews:;
- (id)speedTipsLOTAnimation;
- (id)adsSpeedTipsLabel;
- (id)guideAnimMaskView;
- (id)leftEllipseView;
- (id)rightElipseView;
- (long long)speedRateTipsV2Style;
- (id)guidePressLOTAnimation;
- (id)guideAnimTipsLabel;
- (BOOL)p_getGuideGestureHasShow;
- (void)p_startPressGuideTimer;
- (void)trackHintShowEvent:;
- (void)p_endPressGuideTimer;
- (void)p_setGuideGestureHasShow:;
- (void)p_enableAnotherLongPress:enable:;
- (id)startLongPressAccelerateBlock;
- (void)p_startPlaySpeedtipsAnim;
- (void)p_startAccelerateTimer;
- (void)p_endPlaySpeedtipsAnim;
- (void)p_endAccelerateTimer;
- (id)endLongPressAccelerateBlock;
- (id)sideSingleTappdBlock;
- (void)trackChangeSpeedEvent:;
- (id)accelrateTipsTimer;
- (void)setAccelrateTipsTimer:;
- (id)guideGestureTimer;
- (void)setGuideGestureTimer:;
- (id)leftLongPressGesture;
- (id)rightTapPressGesture;
- (id)rightLongPressGesture;
- (id)leftTapPressGesture;
- (void)p_hanleSingleTapGesture:;
- (void)setLeftLongPressGesture:;
- (void)setLeftTapPressGesture:;
- (void)setRightLongPressGesture:;
- (void)setRightTapPressGesture:;
- (void)setSpeedTipsLOTAnimation:;
- (void)setAdsSpeedTipsLabel:;
- (void)setSidePressViewArray:;
- (void)setGuideAnimMaskView:;
- (void)setGuideAnimTipsLabel:;
- (void)setGuidePressLOTAnimation:;
- (void)setLeftEllipseView:;
- (void)setRightElipseView:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (void)updateWithModel:;
- (void)p_handleLongPressGesture:;
+ (long long)syncGetSearchAwemeSpeedUpStyleV2;
+ (long long)speedRateTipsStyle;
@end

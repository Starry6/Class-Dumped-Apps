@interface AWECaptureButtonAnimationView : UIView
@property (nonatomic) BOOL isShowingCaptureAnimating;
@property (nonatomic) ACCRecordMode recordMode;
@property (nonatomic) Q mixSubtype;
@property (nonatomic) {CGPoint=dd} touchBeginPoint;
@property (nonatomic) ACCCameraSubscription subscription;
@property (nonatomic) UIButton captureButton;
@property (nonatomic) UIButton captureShowTipButton;
@property (nonatomic) AWEAnimatedRecordButton animatedRecordButton;
@property (nonatomic) BOOL isCountdowning;
@property (nonatomic) @? trackRecordVideoEventBlock;
@property (nonatomic) <AWECaptureButtonAnimationViewDelegate> delegate;
@property (nonatomic) BOOL forbidUserPause;
@property (nonatomic) BOOL supportGestureWhenHidden;
@property (nonatomic) BOOL isAutoStartRecord;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recordMode;
- (void)setRecordMode:;
- (void)switchToMode:;
- (id)animatedRecordButton;
- (void)updateAnimatedRecordButtonCenter:;
- (void)switchToHoldSubtype;
- (BOOL)isAccordWithMixHoldTapAndMixSubtypeTap;
- (BOOL)isShowingCaptureAnimating;
- (void)executeTouchesBeganTask;
- (BOOL)forbidUserPause;
- (BOOL)isCountdowning;
- (void)setIsShowingCaptureAnimating:;
- (BOOL)supportGestureWhenHidden;
- (BOOL)isAccordWithMixHoldTapAndMixSubtypeHold;
- (void)executeTouchesEndTask;
- (id)trackRecordVideoEventBlock;
- (void)setMixSubtype:;
- (BOOL)isAutoStartRecord;
- (void)switchToMode:force:;
- (void)switchToTakePictureMode;
- (void)switchToMixHoldTapRecordMode:;
- (void)setIsCountdowning:;
- (unsigned long long)mixSubtype;
- (void)startCountdownMode;
- (void)endCountdownModeIfNeed;
- (void)setTrackRecordVideoEventBlock:;
- (void)setForbidUserPause:;
- (void)setSupportGestureWhenHidden:;
- (void)setIsAutoStartRecord:;
- (void)addTouchEventObserver:;
- (void)setAnimatedRecordButton:;
- (id)touchBeginPoint;
- (void)setTouchBeginPoint:;
- (void)setCaptureShowTipButton:;
- (id)captureShowTipButton;
- (void)checkNormalImageForButton:setAlpha:;
- (id)subscription;
- (void)setSubscription:;
- (id)init;
- (id)delegate;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (id)hitTest:withEvent:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)touchesMoved:withEvent:;
- (void)stop;
- (id)captureButton;
- (void)setCaptureButton:;
@end

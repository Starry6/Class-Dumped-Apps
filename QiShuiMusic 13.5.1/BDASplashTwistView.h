@interface BDASplashTwistView : BDASplashComplianceBaseView
@property (nonatomic) BDASplashTwistViewModel viewModel;
@property (nonatomic) BDImageView firstImageView;
@property (nonatomic) BDImageView secondImageView;
@property (nonatomic) BDImageView thirdImageView;
@property (nonatomic) BDImage firstImage;
@property (nonatomic) BDImage secondImage;
@property (nonatomic) BDImage thirdImage;
@property (nonatomic) UIView guideView;
@property (nonatomic) BDImageView guideImageView;
@property (nonatomic) BDImageView progressView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UILabel guideLabel;
@property (nonatomic) BOOL guideViewShowing;
@property (nonatomic) UIView clickOptimizeView;
@property (nonatomic) BDImageView guideImageOptimizeView;
@property (nonatomic) UILabel tipsOptimizeLabel;
@property (nonatomic) UILabel guideOptimizeLabel;
@property (nonatomic) BDASplashTapGestureRecognizer clickGesture;
@property (nonatomic) NSTimer jumpTimer;
@property (nonatomic) {CGPoint=dd} lastFirstImagePosition;
@property (nonatomic) {CGPoint=dd} lastThirdImagePosition;
@property (nonatomic) {?=ddd} keyGravity;
@property (nonatomic) double keyAngleX;
@property (nonatomic) double keyAngleY;
@property (nonatomic) double keyAngleZ;
@property (nonatomic) double deltaAngleX;
@property (nonatomic) double deltaAngleY;
@property (nonatomic) double deltaAngleZ;
@property (nonatomic) double lastGravityX;
@property (nonatomic) double lastGravityY;
@property (nonatomic) BOOL isStartDetect;
@property (nonatomic) double startDetectTime;
@property (nonatomic) q twistCount;
@property (nonatomic) double firstSatisfyTime;
@property (nonatomic) double angularSensitivity;
@property (nonatomic) double accelerationSensitivity;
@property (nonatomic) q resetWhenOverflow;
@property (nonatomic) double clearDeltaX;
@property (nonatomic) double clearDeltaY;
@property (nonatomic) double clearDeltaZ;
@property (nonatomic) q lastDirection;
@property (nonatomic) BOOL isBidirectional;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setClearDeltaX:;
- (void)setClearDeltaZ:;
- (void)setDeltaAngleY:;
- (BOOL)checkAllConfigWithRotationRate:;
- (id)secondImageView;
- (void)setClearDeltaY:;
- (void)setDeltaAngleX:;
- (void)setDeltaAngleZ:;
- (void)setSecondImage:;
- (double)startDetectTime;
- (double)accelerationSensitivity;
- (double)angularSensitivity;
- (double)clearDeltaX;
- (double)clearDeltaY;
- (double)clearDeltaZ;
- (void)clearFlag;
- (void)clearFlagByScene;
- (void)clearFlagByThreshold;
- (id)clickGesture;
- (id)clickOptimizeView;
- (double)deltaAngleX;
- (double)deltaAngleY;
- (double)deltaAngleZ;
- (id)firstImage;
- (id)firstImageView;
- (double)firstSatisfyTime;
- (BOOL)getMotionIsInactive;
- (id)guideImageOptimizeView;
- (id)guideImageView;
- (id)guideLabel;
- (id)guideOptimizeLabel;
- (BOOL)guideViewShowing;
- (id)initWithFrame:viewHolder:viewModel:;
- (BOOL)isStartDetect;
- (id)jumpTimer;
- (double)keyAngleX;
- (double)keyAngleY;
- (double)keyAngleZ;
- (id)keyGravity;
- (long long)lastDirection;
- (id)lastFirstImagePosition;
- (double)lastGravityX;
- (double)lastGravityY;
- (id)lastThirdImagePosition;
- (void)layoutForClickNormalStyle;
- (void)layoutForClickOptimizeStyle;
- (id)locateGuideViewPointWithResource:;
- (id)locateImageViewPoint:;
- (void)pauseProgress;
- (long long)resetWhenOverflow;
- (void)resumeProgress;
- (id)secondImage;
- (void)setAccelerationSensitivity:;
- (void)setAngularSensitivity:;
- (void)setClickGesture:;
- (void)setClickOptimizeView:;
- (void)setFirstImage:;
- (void)setFirstImageView:;
- (void)setFirstSatisfyTime:;
- (void)setGuideImageOptimizeView:;
- (void)setGuideImageView:;
- (void)setGuideLabel:;
- (void)setGuideOptimizeLabel:;
- (void)setGuideText:;
- (void)setGuideViewShowing:;
- (void)setIsStartDetect:;
- (void)setJumpTimer:;
- (void)setKeyAngleX:;
- (void)setKeyAngleY:;
- (void)setKeyAngleZ:;
- (void)setKeyGravity:;
- (void)setLastDirection:;
- (void)setLastFirstImagePosition:;
- (void)setLastGravityX:;
- (void)setLastGravityY:;
- (void)setLastThirdImagePosition:;
- (void)setResetWhenOverflow:;
- (void)setSecondImageView:;
- (void)setStartDetectTime:;
- (void)setThirdImage:;
- (void)setThirdImageView:;
- (void)setTipsLabel:;
- (void)setTipsOptimizeLabel:;
- (void)setTwistCount:;
- (void)setupImageViewIfNeeded;
- (void)splashJump;
- (void)splashTrackEventWithLabel:extra:adExtra:;
- (void)splashTwistClick:;
- (void)splashValidClickWithPoint:adExtra:;
- (void)startDetectMotion;
- (id)thirdImage;
- (id)thirdImageView;
- (id)tipsLabel;
- (id)tipsOptimizeLabel;
- (void)trackTwistClearInfo;
- (void)trackTwistInfoWithAngleX:angleY:angleZ:;
- (long long)twistCount;
- (void)updateGuideViewState:;
- (void)updateWithDeviceMotion:;
- (BOOL)whetherPostponeSplashView;
- (void)addCustomView;
- (void)addGesture;
- (void)updateConfig;
- (id)viewModel;
- (BOOL)pointInside:withEvent:;
- (void)setProgressView:;
- (void)stop;
- (void)show;
- (void).cxx_destruct;
- (void)pause;
- (void)setViewModel:;
- (id)progressView;
- (BOOL)isBidirectional;
- (void)setIsBidirectional:;
- (void)loadImageData;
- (void)stopProgress;
- (void)setGuideView:;
- (id)guideView;
@end

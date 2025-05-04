@interface AWEAdSummerCallingGuideView : UIView
@property (nonatomic) UIView backgroundContainerView;
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) NSTimer countdownTimer;
@property (nonatomic) q countdownSeconds;
@property (nonatomic) @? guideCompletionHandler;
- (void)setCountdownSeconds:;
- (long long)countdownSeconds;
- (id)countdownTimer;
- (id)guideCompletionHandler;
- (void)setCountdownTimer:;
- (id)initWithHintText:;
- (void)resetCountdown;
- (void)setGuideCompletionHandler:;
- (void).cxx_destruct;
- (id)backgroundContainerView;
- (void)setBackgroundContainerView:;
- (id)hintLabel;
- (void)setHintLabel:;
- (void)startCountdown;
@end

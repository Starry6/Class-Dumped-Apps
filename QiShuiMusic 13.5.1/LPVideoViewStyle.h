@interface LPVideoViewStyle : NSObject
@property (nonatomic) LPVideoPlayButtonStyle playButton;
@property (nonatomic) LPImageViewStyle muteButton;
@property (nonatomic) LPPadding muteButtonPadding;
@property (nonatomic) double muteButtonOpacity;
@property (nonatomic) double muteButtonHighlightedOpacity;
@property (nonatomic) UIColor pulsingLoadIndicatorColor;
@property (nonatomic) double pulsingLoadIndicatorMaximumOpacity;
@property (nonatomic) double pulsingLoadIndicatorDuration;
@property (nonatomic) CAMediaTimingFunction pulsingLoadIndicatorTimingFunction;
- (id)initWithPlatform:;
- (void).cxx_destruct;
- (id)muteButton;
- (id)playButton;
- (id)muteButtonPadding;
- (double)muteButtonOpacity;
- (void)setMuteButtonOpacity:;
- (double)muteButtonHighlightedOpacity;
- (void)setMuteButtonHighlightedOpacity:;
- (id)pulsingLoadIndicatorColor;
- (void)setPulsingLoadIndicatorColor:;
- (double)pulsingLoadIndicatorMaximumOpacity;
- (void)setPulsingLoadIndicatorMaximumOpacity:;
- (double)pulsingLoadIndicatorDuration;
- (void)setPulsingLoadIndicatorDuration:;
- (id)pulsingLoadIndicatorTimingFunction;
- (void)setPulsingLoadIndicatorTimingFunction:;
@end

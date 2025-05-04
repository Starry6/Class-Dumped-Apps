@interface AWELandscapeProgressContainerView : UIView
@property (nonatomic) double totalTime;
@property (nonatomic) double playedTime;
@property (nonatomic) <AWELandscapeProgressContainerViewDelegate> delegate;
- (double)playedTime;
- (void)setPlayedTime:;
- (id)delegate;
- (double)totalTime;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setTotalTime:;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
@end

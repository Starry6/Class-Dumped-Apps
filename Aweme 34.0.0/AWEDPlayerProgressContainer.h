@interface AWEDPlayerProgressContainer : UIView
@property (nonatomic) double totalTime;
@property (nonatomic) double playedTime;
@property (nonatomic) <AWEDPlayerProgressContainerViewDelegate> delegate;
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
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
@end

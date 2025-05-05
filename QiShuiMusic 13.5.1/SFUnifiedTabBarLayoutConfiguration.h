@interface SFUnifiedTabBarLayoutConfiguration : NSObject
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) SFUnifiedTabBarMetrics barMetrics;
@property (nonatomic) {CGPoint=dd} midpointForCenteredContent;
@property (nonatomic) BOOL standalone;
@property (nonatomic) BOOL flipped;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} visibleRectOverride;
- (id)barMetrics;
- (id)initWithScrollView:;
- (void)setFlipped:;
- (BOOL)flipped;
- (id)scrollView;
- (void).cxx_destruct;
- (void)setBarMetrics:;
- (id)midpointForCenteredContent;
- (void)setMidpointForCenteredContent:;
- (BOOL)isStandalone;
- (void)setStandalone:;
- (id)visibleRectOverride;
- (void)setVisibleRectOverride:;
@end

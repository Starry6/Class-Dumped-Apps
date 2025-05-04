@interface AWEIMSwipeActionTransitioningContext : NSObject
@property (nonatomic) NSString actionIdentifier;
@property (nonatomic) double oldPercentVisible;
@property (nonatomic) double newPercentVisible;
@property (nonatomic) UIButton button;
@property (nonatomic) UIView wrapperView;
- (void)setOldPercentVisible:;
- (void)setNewPercentVisible:;
- (double)oldPercentVisible;
- (double)newPercentVisible;
- (void)setButton:;
- (id)actionIdentifier;
- (id)wrapperView;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)button;
- (void)setActionIdentifier:;
- (void)setWrapperView:;
@end

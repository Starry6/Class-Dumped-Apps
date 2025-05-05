@interface OBNavigationBarDisplayState : NSObject
@property (nonatomic) double backgroundOpacity;
@property (nonatomic) double titleOpacity;
- (void)setBackgroundOpacity:;
- (id)initWithNavigationBar:;
- (void)applyState:;
- (void)setTitleOpacity:;
- (double)backgroundOpacity;
- (double)titleOpacity;
+ (id)displayStateForNavigationBar:;
@end

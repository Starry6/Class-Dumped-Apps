@interface QLRoundProgressView : UIView
@property (nonatomic) double progress;
- (void)drawLayer:inContext:;
- (void)setProgress:;
- (double)progress;
- (id)initWithFrame:;
- (void)didMoveToWindow;
- (void)setProgress:animated:;
+ (Class)layerClass;
@end

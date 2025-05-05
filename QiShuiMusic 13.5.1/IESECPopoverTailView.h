@interface IESECPopoverTailView : UIView
@property (nonatomic) q direction;
@property (nonatomic) UIColor tailColor;
- (id)popoverSharpBezierPathWithRect:;
- (void)setTailColor:;
- (id)tailColor;
- (long long)direction;
- (id)init;
- (void)drawRect:;
- (void)setDirection:;
- (void).cxx_destruct;
@end

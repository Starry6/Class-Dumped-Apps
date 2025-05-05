@interface IESECSlicePopoverContentView : UIView
@property (nonatomic) Q position;
@property (nonatomic) double sharpOffset;
@property (nonatomic) UIColor popoverColor;
- (void)setSharpOffset:;
- (void)setPopoverColor:;
- (double)sharpOffset;
- (void)setPosition:;
- (unsigned long long)position;
- (id)init;
- (void)drawRect:;
- (void).cxx_destruct;
- (id)popoverColor;
+ (id)duxPopoverSharpBezierPathWithRect:position:sharpOffset:sharpSmooth:;
@end

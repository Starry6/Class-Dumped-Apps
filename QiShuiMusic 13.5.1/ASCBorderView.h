@interface ASCBorderView : UIView
@property (nonatomic) UIColor color;
@property (nonatomic) double width;
@property (nonatomic) double cornerRadius;
@property (nonatomic) NSString cornerCurve;
@property (nonatomic) Q cornerMask;
- (id)cornerCurve;
- (void)setColor:;
- (void)setWidth:;
- (id)initWithCoder:;
- (unsigned long long)cornerMask;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)color;
- (void)encodeWithCoder:;
- (double)width;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (void)setCornerCurve:;
- (void)setCornerMask:;
- (double)cornerRadius;
- (void)updateBorderColor;
@end

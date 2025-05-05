@interface PSCapacityBarView : UIView
@property (nonatomic) PSCapacityBarData barData;
@property (nonatomic) UIColor barBackgroundColor;
@property (nonatomic) UIColor barSeparatorColor;
@property (nonatomic) UIColor barOtherDataColor;
- (void)drawRect:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)bezierPathWithLineFrom:to:;
- (void)setBarData:;
- (void)setBarBackgroundColor:;
- (void)setBarSeparatorColor:;
- (void)setBarOtherDataColor:;
- (id)barData;
- (id)barBackgroundColor;
- (id)barSeparatorColor;
- (id)barOtherDataColor;
@end

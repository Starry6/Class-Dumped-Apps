@interface AWEECOMIMBaseContianerView : UIView
@property (nonatomic) double leftTop;
@property (nonatomic) double leftBottom;
@property (nonatomic) double rightTop;
@property (nonatomic) double rightBottom;
- (void)setLeftTop:;
- (void)setLeftBottom:;
- (void)setRightTop:;
- (void)setRightBottom:;
- (double)leftTop;
- (double)leftBottom;
- (double)rightTop;
- (double)rightBottom;
- (void)ecom_addDifferentCornerRadiusForLeftTop:leftBottom:rightTop:rightBottom:;
- (void)layoutSubviews;
@end

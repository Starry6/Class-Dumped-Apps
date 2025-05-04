@interface AWECommentDownButton : UIControl
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel label;
@property (nonatomic) CALayer topShapeLayer;
@property (nonatomic) BOOL isBGColorWhite;
- (void)setIsBGColorWhite:;
- (BOOL)isBGColorWhite;
- (void)__topViewTap;
- (void)setTopShapeLayer:;
- (id)topShapeLayer;
- (void)setLabel:;
- (id)icon;
- (id)initWithFrame:;
- (id)label;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end

@interface AWEPayRPDetailTipsView : UIView
@property (nonatomic) UIImageView triangleView;
@property (nonatomic) UIView tipsContainerView;
@property (nonatomic) UIImageView tipsIconView;
@property (nonatomic) UILabel tipsContent;
- (void)p_setupUI;
- (id)triangleView;
- (void)setTriangleView:;
- (id)tipsContainerView;
- (id)tipsIconView;
- (void)setTipsIconView:;
- (void)updateWithTipsContent:;
- (id)tipsContent;
- (void)setTipsContainerView:;
- (void)setTipsContent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end

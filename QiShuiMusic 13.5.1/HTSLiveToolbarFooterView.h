@interface HTSLiveToolbarFooterView : UICollectionReusableView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView lineView;
- (void)updateCustomSize:;
- (void)updateLineColor:alpha:;
- (void)updateLinePaddingLeft:;
- (id)contentView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)lineView;
- (void)setLineView:;
@end

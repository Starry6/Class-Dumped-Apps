@interface IESECMoreOptionView : UIView
@property (nonatomic) Q style;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) UIView contentView;
@property (nonatomic) NSArray items;
- (void)handleTapItemView:;
- (id)initWithItmes:;
- (id)initWithItmes:style:;
- (id)contentView;
- (id)items;
- (void)setStyle:;
- (void)setItems:;
- (void).cxx_destruct;
- (void)setContentView:;
- (unsigned long long)style;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupViews;
- (double)viewHeight;
@end

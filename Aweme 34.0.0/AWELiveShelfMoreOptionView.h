@interface AWELiveShelfMoreOptionView : UIView
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) UIView contentView;
@property (nonatomic) NSArray items;
- (void)p_addSeparateLineToItemView:;
- (id)p_separateLine;
- (id)initWithItems:;
- (id)items;
- (void)setItems:;
- (id)viewSize;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupViews;
- (double)viewHeight;
@end

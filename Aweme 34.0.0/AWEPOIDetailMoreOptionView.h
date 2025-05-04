@interface AWEPOIDetailMoreOptionView : UIView
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) UIView contentView;
@property (nonatomic) NSArray items;
@property (nonatomic) <AWEPOIDetailMoreOptionViewDelegate> delegate;
- (void)handleTapItemView:;
- (id)initWithItems:;
- (id)items;
- (id)delegate;
- (void)setItems:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setDelegate:;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupViews;
- (double)viewHeight;
@end

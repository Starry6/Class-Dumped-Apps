@interface AWERVListHeaderView : UICollectionReusableView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWERVLineHeaderView lineView;
- (void)showLineIfNeed:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)lineView;
- (void)setLineView:;
- (void)configureSubviews;
- (void)configureConstraints;
- (void)updateTitle:;
@end

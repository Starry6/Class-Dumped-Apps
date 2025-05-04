@interface AWEUserRecommendGenericTableViewCell : UITableViewCell
@property (nonatomic) UIView separatorView;
@property (nonatomic) UIView<AWEUserRecommendCellViewProtocol> basicView;
- (id)basicView;
- (void)setBasicView:;
- (void)setHighlighted:animated:;
- (void)setSeparatorView:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)separatorView;
@end

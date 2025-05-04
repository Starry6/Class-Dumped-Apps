@interface AWEUserListGeneralTableViewCell : AWEIMSwipeTableViewCell
@property (nonatomic) AWEUserListGeneralCellView basicView;
- (void)setupWithConfig:;
- (void)highlightWithColor:completion:;
- (id)basicView;
- (void)setBasicView:;
- (void)highlightWithColor:;
- (void)setHighlighted:animated:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)identifier;
@end

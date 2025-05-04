@interface AWECoCreatorSectionHeaderCell : UITableViewCell
@property (nonatomic) UIView container;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView cornerBackgroundView;
@property (nonatomic) AWECoCreatorSectionHeaderCellModel model;
- (id)cornerBackgroundView;
- (void)setCornerBackgroundView:;
- (void)setModel:;
- (void)setContainer:;
- (id)container;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)configureSubviews;
- (void)updateSubviews;
- (void)updateWithModel:;
+ (id)identifier;
@end

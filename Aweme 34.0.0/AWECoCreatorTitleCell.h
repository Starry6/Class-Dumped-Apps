@interface AWECoCreatorTitleCell : UITableViewCell
@property (nonatomic) UIView container;
@property (nonatomic) AWECoCreatorTitleCellModel model;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView lineView;
- (void)configureWithModel:hasRectCorner:landscape:;
- (id)attributedStringWithModel:;
- (void)setModel:;
- (void)setContainer:;
- (id)container;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)lineView;
- (void)setLineView:;
- (void)tapped;
- (void)configureSubviews;
- (void)setIsLandscape:;
- (BOOL)isLandscape;
- (void)configureConstraints;
+ (id)identifier;
@end

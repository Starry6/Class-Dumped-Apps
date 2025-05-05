@interface IESLivePSActionSheetCommonItemCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) @? didClick;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)didClick;
- (void)setDidClick:;
- (void)updateItemCellTitle:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupUI;
- (void)singleTap:;
@end

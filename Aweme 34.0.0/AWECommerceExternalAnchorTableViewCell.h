@interface AWECommerceExternalAnchorTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UIView separatorLine;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton removeButton;
@property (nonatomic) @? removeAnchorButtonDidClickBlock;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)setRemoveAnchorButtonDidClickBlock:;
- (id)removeAnchorButtonDidClickBlock;
- (void)removeButtonDidClicked:;
- (void)updateCellContentWith:;
- (void)awakeFromNib;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSelected:animated:;
- (void)setIconImageView:;
- (id)separatorLine;
- (void)setSeparatorLine:;
- (id)removeButton;
- (void)setRemoveButton:;
+ (id)cellIdentifier;
@end

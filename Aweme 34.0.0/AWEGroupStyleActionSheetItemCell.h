@interface AWEGroupStyleActionSheetItemCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIView bottomLineView;
- (id)bottomLineView;
- (void)setBottomLineView:;
- (void)p_setup;
- (void)configWithItemModel:itemIndexInGroup:totalItemInGroup:;
- (void)p_updateContentCornerRadiusWithitemIndexInGroup:totalItemInGroup:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
@end

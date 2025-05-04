@interface AWEFollowGroupTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIView bottomLine;
- (void)__setupView;
- (void)configWithGroup:isSelecting:;
- (id)iconImage;
- (void)setIconImage:;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (id)bottomLine;
- (void)setBottomLine:;
@end

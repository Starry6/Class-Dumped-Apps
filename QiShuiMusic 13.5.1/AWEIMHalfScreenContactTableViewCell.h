@interface AWEIMHalfScreenContactTableViewCell : UITableViewCell
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView selectedStateImageView;
@property (nonatomic) AWEIMShareModel shareModel;
@property (nonatomic) BOOL isSelected;
- (void)changeSelectState:;
- (void)configWithShareModel:;
- (void)p_setupUI;
- (id)selectedStateImageView;
- (void)setSelectedStateImageView:;
- (id)initWithStyle:reuseIdentifier:;
- (BOOL)isSelected;
- (void)setHighlighted:animated:;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (id)nameLabel;
- (void)setNameLabel:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)shareModel;
- (void)setShareModel:;
+ (id)identifier;
@end

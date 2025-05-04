@interface AWEIMMyContentFeedbackDigCollectionCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) NSMutableArray tags;
@property (nonatomic) UIView tagBackground;
@property (nonatomic) AWEIMMyContentFeedbackDigModel model;
@property (nonatomic) double totalTagsWidth;
- (void)__setupUI;
- (void)__setupTagWithTags:;
- (void)__setupNameLabelWithName:;
- (void)__layoutTags;
- (id)tagBackground;
- (void)setTotalTagsWidth:;
- (double)totalTagsWidth;
- (void)__didClickAvatar;
- (void)configWithModel:conversation:;
- (void)setTagBackground:;
- (void)setModel:;
- (id)tags;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (void)setTags:;
- (id)avatarView;
- (id)model;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
+ (id)identifier;
@end

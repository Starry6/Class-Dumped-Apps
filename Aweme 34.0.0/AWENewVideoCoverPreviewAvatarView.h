@interface AWENewVideoCoverPreviewAvatarView : UICollectionViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UIView labelContainer;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel idLabel;
@property (nonatomic) UILabel postLabel;
- (id)postLabel;
- (void)setPostLabel:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)avatarView;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)setupUI;
- (id)idLabel;
- (void)setIdLabel:;
- (id)labelContainer;
- (void)setLabelContainer:;
@end

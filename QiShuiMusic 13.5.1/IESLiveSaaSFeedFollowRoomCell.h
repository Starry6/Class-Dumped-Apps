@interface IESLiveSaaSFeedFollowRoomCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nicknameLabel;
@property (nonatomic) UILabel liveLabel;
@property (nonatomic) CAGradientLayer colorLayer;
@property (nonatomic) IESLiveSaaSFeedMarkView liveMarkView;
- (id)liveMarkView;
- (void)setLiveMarkView:;
- (void)_commonInit;
- (void)update:;
- (id)avatarView;
- (void)setLiveLabel:;
- (void)setAvatarView:;
- (void)prepareForReuse;
- (id)liveLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)nicknameLabel;
- (void)setNicknameLabel:;
- (id)colorLayer;
- (void)setColorLayer:;
+ (id)cellSize;
@end

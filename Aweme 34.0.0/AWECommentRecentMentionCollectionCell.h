@interface AWECommentRecentMentionCollectionCell : UICollectionViewCell
@property (nonatomic) UIImageView firstAvatarImageView;
@property (nonatomic) UIImageView secondAvatarImageView;
@property (nonatomic) UILabel recentMentionLabel;
- (void)p_setupUI;
- (id)secondAvatarImageView;
- (id)firstAvatarImageView;
- (id)recentMentionLabel;
- (void)configWithUserList:;
- (void)updateTheme:;
- (void)setFirstAvatarImageView:;
- (void)setSecondAvatarImageView:;
- (void)setRecentMentionLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)identifier;
+ (id)itemSize;
@end

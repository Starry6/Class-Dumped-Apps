@interface IESLiveLimitCommentEmojiCellView : UICollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView emojiImageView;
@property (nonatomic) HTSLiveFixedChatInfo_EmojiDetail emojiModel;
- (id)emojiImageView;
- (id)emojiModel;
- (void)setEmojiImageView:;
- (void)setEmojiModel:;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end

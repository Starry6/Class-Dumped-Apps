@interface AWEIMFansGroupFeedEmojisCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWECommentMiniEmoticonModel model;
@property (nonatomic) AWEIMEmojiButton emojiButton;
@property (nonatomic) @? actionBlock;
- (void)configWithModel:;
- (void)__setupUI;
- (void)updateEmojiBtnBackgroundColor:;
- (void)__handelEmojiButtonTapAction:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setActionBlock:;
- (id)actionBlock;
- (void)setEmojiButton:;
- (id)emojiButton;
+ (id)identifier;
@end

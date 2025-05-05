@interface IESLiveLimitCommentPageEmojiCell : UICollectionViewCell
@property (nonatomic) IESLiveLimitCommentEmojiPannelView emojiPannelView;
@property (nonatomic) @? limitCommentPageEmojiCellClickCallBack;
- (id)emojiPannelView;
- (id)limitCommentPageEmojiCellClickCallBack;
- (void)setEmojiPannelView:;
- (void)setLimitCommentPageEmojiCellClickCallBack:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setData:;
- (void)setupUI;
@end

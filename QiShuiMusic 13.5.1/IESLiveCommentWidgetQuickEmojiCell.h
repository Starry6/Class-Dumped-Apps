@interface IESLiveCommentWidgetQuickEmojiCell : UICollectionViewCell
@property (nonatomic) q imageScale;
@property (nonatomic) <IESLiveEmoticonResourceAdapter> emoticonResource;
@property (nonatomic) UIImageView emojiView;
@property (nonatomic) IESLiveEmoticonModel emoticonModel;
- (id)emojiView;
- (id)emoticonModel;
- (id)emoticonResource;
- (void)setEmojiView:;
- (void)setEmoticonModel:;
- (void)setEmoticonResource:;
- (void)updateWithEmoticonModel:;
- (void)setImageScale:;
- (long long)imageScale;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupView;
@end

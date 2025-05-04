@interface AWEVideoEditEmojiStickerCollectionViewController : AWEVideoEditStickerCollectionViewController
@property (nonatomic) AWEEmojiStickerDataManager emojiStickerDataManager;
- (void)fetchDataWithCompletion:;
- (id)logPB;
- (id)cellAtIndexPath:;
- (id)emojiStickerDataManager;
- (void)loadmoreEmoji;
- (void)setEmojiStickerDataManager:;
- (id)init;
- (long long)style;
- (void).cxx_destruct;
- (void)configureCollectionView;
- (id)stickerType;
@end

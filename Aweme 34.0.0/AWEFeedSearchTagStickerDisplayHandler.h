@interface AWEFeedSearchTagStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler
@property (nonatomic) UIView<AWESearchTagProtocol> contentView;
@property (nonatomic) DUXBasicSheet basicSheet;
@property (nonatomic) AWEVisionTagManager tagManager;
@property (nonatomic) AWESearchStickerModel searchTag;
- (void)hideStickers;
- (void)stickerWillAppear;
- (void)setTagManager:;
- (id)tagManager;
- (void)removeSticker:;
- (BOOL)isFromSearch;
- (void)closePanel;
- (void)setBasicSheet:;
- (id)basicSheet;
- (id)searchTag;
- (void)setSearchTag:;
- (BOOL)canHandleTapAtPoint:;
- (void)displaySticker:;
- (id)createSticker:;
- (void)updateTagViewFrame:;
- (void)longPressAtPoint:;
- (void)onPlayerFrameChanged:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)handleTapAtPoint:;
+ (BOOL)canDisplaySticker:;
@end

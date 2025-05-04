@interface AWEFeedShareLiveToStoryStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler
@property (nonatomic) UIView<ACCStickerContentProtocol><ACCShareLiveToStoryStickerViewProtocol> contentView;
- (void)stickerWillAppear;
- (BOOL)isFromSearch;
- (BOOL)displayByNative;
- (BOOL)canHandleTapAtPoint:;
- (void)displaySticker:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
+ (BOOL)canDisplaySticker:;
@end

@interface AWEFeedGrootStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler
@property (nonatomic) UIView<ACCStickerContentProtocol> contentView;
- (void)displaySticker:;
- (void)jumpToGrootPage;
- (void)trackForGrootStickerJumped;
- (void)trackForGrootStickerClicked;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)handleTapAtPoint:;
- (void)willDisplay;
+ (BOOL)canDisplaySticker:;
@end

@interface AWEFeedShareOrderStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler
@property (nonatomic) UIView<ACCStickerContentProtocol> contentView;
- (void)trackEntranceShow;
- (id)getGoodsPanelParamsFromAweme:;
- (void)trackEntranceClick;
- (void)displaySticker:;
- (void)jumpToGoodsDetail;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)handleTapAtPoint:;
- (void)willDisplay;
+ (BOOL)canDisplaySticker:;
@end

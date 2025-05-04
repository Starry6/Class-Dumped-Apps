@interface AWEFeedCommentStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler
@property (nonatomic) UIView<ACCStickerContentProtocol> contentView;
- (id)commentStickerReplyUser;
- (BOOL)displayByNative;
- (void)displaySticker:;
- (BOOL)forbidHideBGVisualEffect;
- (void)jumpToCommentPage;
- (void)trackForCommentStickerClicked;
- (void)trackForCommentStickerBubbledClicked;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)handleTapAtPoint:;
- (void)willDisplay;
+ (BOOL)canDisplaySticker:;
@end

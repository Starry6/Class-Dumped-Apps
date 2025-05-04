@interface AWEFeedPOIStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler
@property (nonatomic) UIView<ACCStickerContentProtocol> contentView;
- (void)displaySticker:;
- (void)jumpToPOIPage;
- (void)poiTrackerPropClick;
- (void)trackForPOIStickerClicked;
- (id)getPropParams;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)handleTapAtPoint:;
- (void)willDisplay;
+ (BOOL)canDisplaySticker:;
@end

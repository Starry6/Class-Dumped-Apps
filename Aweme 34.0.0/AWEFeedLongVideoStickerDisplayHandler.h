@interface AWEFeedLongVideoStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler
@property (nonatomic) UIView<ACCAppointStickerViewProtocol> contentView;
- (BOOL)displayByNative;
- (void)displaySticker:;
- (void)reportEvent:isAppointed:extra:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)handleTapAtPoint:;
+ (BOOL)canDisplaySticker:;
@end

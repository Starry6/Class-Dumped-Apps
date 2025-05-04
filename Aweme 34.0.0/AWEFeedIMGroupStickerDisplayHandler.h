@interface AWEFeedIMGroupStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler
@property (nonatomic) BOOL disableTap;
@property (nonatomic) UIView<ACCStickerContentProtocol> contentView;
- (id)p_commonParams;
- (void)setDisableTap:;
- (BOOL)disableTap;
- (BOOL)displayByNative;
- (BOOL)canHandleTapAtPoint:;
- (void)displaySticker:;
- (void)p_showTracker;
- (id)p_enableForFrequencyControl;
- (id)p_enableForLogin;
- (id)p_enableForTeenMode;
- (id)p_transferToJonGroupPage;
- (void)p_clickTracker;
- (id)p_handleError:;
- (id)p_enableForBasicMode;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)handleTapAtPoint:;
+ (BOOL)canDisplaySticker:;
@end

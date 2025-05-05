@interface AnniePopupExtensionBasedOnBDX : NSObject
@property (nonatomic) BDXPopupViewController<BDXPopupContainerProtocol> bdxViewController;
- (id)bdxViewController;
- (id)initWithBDXViewController:;
- (void)setBdxViewController:;
- (void)setCloseByClickMaskEnable:;
- (void)setCloseByGestureEnbale:;
- (void)setDisableNativeClose:;
- (void).cxx_destruct;
@end

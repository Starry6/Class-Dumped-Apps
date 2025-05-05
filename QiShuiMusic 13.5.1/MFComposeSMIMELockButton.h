@interface MFComposeSMIMELockButton : UIButton
@property (nonatomic) {UIEdgeInsets=dddd} touchInsets;
@property (nonatomic) BOOL wantsEncryption;
@property (nonatomic) BOOL canEncrypt;
- (void)setTouchInsets:;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)setEnabled:animated:;
- (id)touchInsets;
- (void)_updateButtonAppearance;
- (void)setWantsEncryption:;
- (void)setCanEncrypt:;
- (void)setWantsEncryption:canEncrypt:animated:;
- (void)_updateButtonAppearanceAnimated:;
- (void)_openLock;
- (void)_closeLock;
- (BOOL)wantsEncryption;
- (BOOL)canEncrypt;
@end

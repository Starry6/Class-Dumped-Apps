@interface MKPlaceHeaderButton : UIButton
@property (nonatomic) _MKPlaceActionButtonController buttonController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)titleRectForContentRect:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged;
- (void)buttonSelected:;
- (void)placeActionButtonControllerTextDidChange:;
- (void)setPrimaryTitle:;
- (void)setPrimaryTitle:subtitle:;
- (id)buttonController;
- (void)setButtonController:;
- (id)initWithPrimaryType:;
- (void)_setVibrantView;
- (void)applyButtonDefaultConfiguration;
- (BOOL)_isTintColorWhite;
- (id)_primaryButtonTextColor;
- (id)_primaryButtonColor;
- (void)_updateStylePrimaryButton;
- (void)_updateStyleNonPrimaryButton;
- (void)updateButtonWithHighlighted:;
@end

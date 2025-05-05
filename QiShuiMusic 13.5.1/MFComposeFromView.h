@interface MFComposeFromView : MFMailComposeHeaderView
@property (nonatomic) MFPopupButton popupButton;
@property (nonatomic) <MFComposeFromViewDelegate> delegate;
@property (nonatomic) NSString<ECEmailAddressConvertible> selectedAddress;
@property (nonatomic) NSArray availableAddresses;
@property (nonatomic) NSArray deferredAddresses;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)selectedAddress;
- (void)setSelectedAddress:;
- (void)refreshPreferredContentSize;
- (id)menuForPopupButton:;
- (void)popupButton:didSelectItem:;
- (void)popupButtonWillPresentMenu:animator:;
- (id)popupButton;
- (void)showLoadingState:;
- (void)setSelectedAddressToHME:;
- (void)setAvailableAddresses:;
- (id)availableAddresses;
- (void)setDeferredAddresses:;
- (id)deferredAddresses;
- (void)setPopupButton:;
+ (id)log;
@end

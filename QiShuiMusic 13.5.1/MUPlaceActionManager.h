@interface MUPlaceActionManager : MKPlaceActionManager
@property (nonatomic) <_MKInfoCardAnalyticsDelegate><_MKPlaceCardConforming><MKPlaceCardActionControllerDelegate> delegate;
- (id)delegate;
- (id)createFooterActions;
- (id)createMenuActions;
- (BOOL)_showWebsite;
- (void)_addItemIfInMapsApp:actions:;
- (void)_addBasicFooterActions:;
- (void)_addDroppedPinFooterActions:;
- (void)_addTransitLineItemFooterActions:;
- (void)_addMyLocationFooterActions:;
- (void)_addAddressFooterActions:;
- (void)_addHomeActionIfNeeded:;
@end

@interface AWELongPressPanelEffectArtistViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (BOOL)__isZoomView;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)trackSetPropPageActionType:;
+ (BOOL)shouldShowSetEffectAwemeCoverWithModel:;
+ (id)longPressPanelViewModel;
@end

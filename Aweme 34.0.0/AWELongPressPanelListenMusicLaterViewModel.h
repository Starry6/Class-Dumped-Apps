@interface AWELongPressPanelListenMusicLaterViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:;
- (void)trackListenLaterClick;
- (void)addToListenLater;
+ (id)longPressPanelViewModel;
@end

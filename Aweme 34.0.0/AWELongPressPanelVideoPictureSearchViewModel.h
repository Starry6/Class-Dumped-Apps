@interface AWELongPressPanelVideoPictureSearchViewModel : AWELongPressPanelPictureSearchBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)trackerEntranceUnshownWithReason:;
- (void)fetchIntentData;
- (BOOL)enableSubView;
- (void)clearAssociationData;
- (void)trackerIconRealityTagShow;
@end

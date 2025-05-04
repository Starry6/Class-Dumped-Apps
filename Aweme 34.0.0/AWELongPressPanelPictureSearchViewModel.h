@interface AWELongPressPanelPictureSearchViewModel : AWELongPressPanelPictureSearchBaseViewModel
- (id)commonParams;
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)trackerEntranceUnshownWithReason:;
- (void)fetchIntentData;
- (BOOL)enableSubView;
- (id)tagParams;
- (void)clearAssociationData;
- (void)trackerIconRealityTagShow;
@end

@interface AWEShareGroupService : AWEShareCommonImpl
@property (nonatomic) AWEShareContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupQRCodePanelContextWithImage:;
- (id)showGroupQRCodePanelWithContext:onViewController:;
- (id)sheetViewForSharePanel:;
- (void)groupQRCodeImageForGroup:forceUpdate:completion:;
- (void)showPanelWithGroup:onViewController:;
- (void)showQRCodeViewControllerWithGroup:platformType:settingShareMode:;
- (id)p_contextWithGroup:;
- (id)p_shareGroupStageWithGroup:;
- (void)trackDismissEvent:;
- (void)p_trackShareActionWithStage:group:;
- (void)trackShareFail:;
- (id)p_groupCommandChannelWithClickHandler:;
- (id)qrCodeShareGuideViewWithStyle:customImage:forSaveImage:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end

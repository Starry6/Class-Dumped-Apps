@interface AWETeenGeneralShareButton : AWETeenGeneralBaseActionButton
@property (nonatomic) AWETeenMoreSheetView sharePanelView;
@property (nonatomic) NSString reportID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)reportAction;
- (void)btnClick;
- (void)setSharePanelView:;
- (id)sharePanelView;
- (void)willDismissPanel:;
- (void)configWithModel:extra:;
- (void)didFinishShareWithItemID:shareCount:;
- (void)p_handleBroadcastNotification:;
- (void)p_updateShareCount;
- (id)copyLinkAction;
- (void)saveDataCenter:downloadCompleted:;
- (void)saveDataCenter:saveToSysPhotosCompleted:;
- (void)saveDataCenter:needApplyPhotoPermission:;
- (id)init;
- (void)dealloc;
- (id)reportID;
- (void).cxx_destruct;
- (id)saveButton;
- (void)setReportID:;
@end

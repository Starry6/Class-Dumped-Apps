@interface AWEShareIronManService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showQRCodePanelWithIronManUser:;
- (void)showQRCodePanelWithIronManUser:bdpContext:;
- (id)showPanelWithIronMan:configurationHandler:onViewController:;
- (id)showPanelWithIronMan:msgType:msgContent:configurationHandler:onViewController:;
- (id)showPanelWithIronMan:msgType:msgContent:contextHandler:configurationHandler:onViewController:;
- (id)contextWithIronMan:msgType:msgContent:;
- (id)prepareShareIronModelStage;
@end

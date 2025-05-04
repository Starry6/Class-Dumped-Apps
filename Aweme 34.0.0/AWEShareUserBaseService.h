@interface AWEShareUserBaseService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithUser:configurationHandler:onViewController:;
- (id)contextWithUser:;
- (id)profileQRCodeContentViewWithUser:;
- (id)rebrandUserQRCodeImageWithContext:qrCodeImage:templateModel:;
- (id)taskWithUser:;
- (id)configurationWithUser:;
- (id)statsShareUserStage;
@end

@interface AWEProfileHeaderNameAreaTopContainerComponent_NEWAPI : AWEProfileHeaderBaseComponent
@property (nonatomic) double maxWidth;
@property (nonatomic) AWERLVirtualFlexView virtualContainer;
@property (nonatomic) AWEProfileHeaderNicknameComponent_NEWAPI nicknameComponent;
@property (nonatomic) AWEProfileHeaderQRCodeComponent_NEWAPI qrCodeComponent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildSubComponents;
- (id)buildVirtualView:;
- (void)updateContainerWidth:;
- (void)updateComponentData:;
- (id)initWithData:context:maxWidth:;
- (id)virtualContainer;
- (void)setVirtualContainer:;
- (id)nicknameComponent;
- (id)qrCodeComponent;
- (void)setQrCodeComponent:;
- (void)setNicknameComponent:;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
@end

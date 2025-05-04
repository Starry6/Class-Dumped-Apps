@interface AWEProfileHeaderQRCodeComponent_NEWAPI : AWEProfileHeaderBaseComponent
@property (nonatomic) AWEProfileHeaderVirtualView qrCodeVirtualView;
@property (nonatomic) AWEProfileQRCodeView qrCodeView;
@property (nonatomic) double nameLabelLineHeight;
- (id)buildSubComponents;
- (id)buildVirtualView:;
- (void)updateComponentData:;
- (id)qrCodeView;
- (void)setQrCodeView:;
- (id)initWithData:context:maxWidth:;
- (double)nameLabelLineHeight;
- (void)calibrateSize:nameLabelLineHeight:;
- (void)setNameLabelLineHeight:;
- (id)qrCodeVirtualView;
- (void)setQrCodeVirtualView:;
- (void).cxx_destruct;
@end

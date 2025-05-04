@interface AWEProfileHeaderQRCodeComponent : AWERLComponent
@property (nonatomic) AWERLVirtualNode qrCodeNode;
@property (nonatomic) AWEProfileQRCodeView qrCodeView;
@property (nonatomic) double nameLabelLineHeight;
- (id)buildSubComponents;
- (id)virtualNodeWithChildren:;
- (void)updateComponentData:;
- (id)qrCodeView;
- (void)setQrCodeView:;
- (id)initWithData:context:maxWidth:;
- (double)nameLabelLineHeight;
- (void)calibrateSize:nameLabelLineHeight:;
- (id)qrCodeNode;
- (void)setNameLabelLineHeight:;
- (void)setQrCodeNode:;
- (void).cxx_destruct;
@end

@interface AWEProfileHeaderNameAreaTopContainerComponent : AWERLComponent
@property (nonatomic) double maxWidth;
@property (nonatomic) AWERLFlexVirtualNode containerNode;
@property (nonatomic) AWEProfileHeaderNicknameComponent nicknameComponent;
@property (nonatomic) AWEProfileHeaderQRCodeComponent qrCodeComponent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildSubComponents;
- (void)updateContainerWidth:;
- (id)virtualNodeWithChildren:;
- (void)updateComponentData:;
- (id)initWithData:context:maxWidth:;
- (id)containerNode;
- (void)setContainerNode:;
- (id)nicknameComponent;
- (id)qrCodeComponent;
- (void)setQrCodeComponent:;
- (void)setNicknameComponent:;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
@end

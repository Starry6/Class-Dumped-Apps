@interface IESLiveSaaSAlertFactoryWrapper : NSObject
@property (nonatomic) <IESLiveSaaSAlertFactory> alertFactory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertFactory;
- (void)dismissCurrentAlert:;
- (id)initWithAlertFactory:;
- (void)setAlertFactory:;
- (void)showActionSheetWithTitle:buttonTitles:styles:blocks:;
- (id)showAlertWithTitle:AttributedDescription:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:;
- (id)showAlertWithTitle:AttributedDescription:buttonTitles:buttonBlocks:configuration:;
- (id)showAlertWithTitle:AttributedDescription:buttonTitles:buttonBlocks:isButtonAlignedVertically:;
- (id)showAlertWithTitle:description:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:;
- (id)showAlertWithTitle:description:buttonTitles:buttonBlocks:;
- (void).cxx_destruct;
@end

@interface STLive.LiveAlertFactoryImp : NSObject
- (void)dismissCurrentAlert:;
- (void)showActionSheetWithTitle:buttonTitles:styles:blocks:;
- (id)showAlertWithTitle:AttributedDescription:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:;
- (id)showAlertWithTitle:AttributedDescription:buttonTitles:buttonBlocks:isButtonAlignedVertically:;
- (id)showAlertWithTitle:attributedDescription:attributedLinkText:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:linkBlock:;
- (id)showAlertWithTitle:description:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:;
- (id)showAlertWithTitle:description:buttonTitles:buttonBlocks:;
- (id)showAlertWithTitle:description:headerImage:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:;
- (void)showNewStyleAlertWithTitle:description:actionTitle:actionBlock:redCancelTitle:cancelBlock:;
- (id)init;
@end

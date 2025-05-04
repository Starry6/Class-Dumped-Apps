@interface AWEShareTokenAlert : NSObject
+ (void)showAlertWithModel:actionBlock:cancelBlock:;
+ (void)showAlertWithModel:checkboxModel:actionBlock:cancelBlock:;
+ (id)shareTitleWithText:;
+ (id)actionButtonTitleWithShareType:;
+ (id)bodyViewWithDesc:andCheckboxModel:;
+ (void)openDestinationAppWithShareType:;
@end

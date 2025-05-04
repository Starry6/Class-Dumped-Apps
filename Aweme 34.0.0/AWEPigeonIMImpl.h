@interface AWEPigeonIMImpl : NSObject
- (void)callMethod:arguments:completion:;
- (void)__sendMessageWithparams:completion:;
- (void)__getCurrentSecUidWithparams:completion:;
- (void)__getSkinModeWithCompletion:;
- (void)__getOneCardLogParamsWithparams:completion:;
- (void)__didEndDisplayOneCardWithparams:completion:;
- (void)__getOneCardMessageUIConfigWithparams:completion:;
- (void)__getConversationInfoWithParams:completion:;
- (void)__getCurrentUserIdWithParams:completion:;
- (void)__deleteOneCardMessageCellWithParams:completion:;
- (void)__showAuthIMMessageViewWithParams:completion:;
- (void)__closePrivateMessageViewWithParams:completion:;
+ (id)pigeonMethodName;
+ (id)create;
@end

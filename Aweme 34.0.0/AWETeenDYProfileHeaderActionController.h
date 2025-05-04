@interface AWETeenDYProfileHeaderActionController : AWETeenProfileHeaderActionController
- (id)enterFromValueWithProcessId:;
- (BOOL)showSignature;
- (void)avatarTappedWithHeaderView:;
- (BOOL)isUsernameEnableEdit;
- (void)editSignature;
- (BOOL)isNicknameEnableEdit;
- (id)enterMethodValueWithProcessId:enterString:;
- (id)signatureString;
@end

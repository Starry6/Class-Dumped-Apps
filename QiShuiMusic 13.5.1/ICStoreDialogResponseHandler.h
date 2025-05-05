@interface ICStoreDialogResponseHandler : NSObject
- (id)init;
- (void)handleStoreDialogResponse:usingRequestContext:withCompletionHandler:;
- (void)_handleGotoButtonAction:usingRequestContext:withCompletionHandler:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)_handleFamilyPermissionButtonAction:usingRequestContext:completion:;
- (void)encodeWithCoder:;
- (void)handleButtonAction:usingRequestContext:withCompletionHandler:;
- (void)_handleBuyButtonAction:usingRequestContext:withCompletionHandler:;
- (void)_handleDefaultStoreDialogResponse:usingRequestContext:withDialogTimeout:withCompletionHandler:;
- (id)initWithConfiguration:;
- (void)_handleAuthenticationStoreDialogResponse:usingRequestContext:withDialogTimeout:withCompletionHandler:;
- (BOOL)isEqual:;
- (void)handleStoreDialogResponse:usingRequestContext:withDialogTimeout:withCompletionHandler:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

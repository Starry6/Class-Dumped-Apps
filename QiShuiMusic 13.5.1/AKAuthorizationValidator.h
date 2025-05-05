@interface AKAuthorizationValidator : NSObject
+ (BOOL)canPerformCredentialRequest:error:;
+ (BOOL)canPerformAuthorizationRequest:error:;
+ (BOOL)canPerformPasswordRequest:error:;
+ (BOOL)shouldContinueWithResponse:error:;
+ (BOOL)_requirePasscodeSet;
@end

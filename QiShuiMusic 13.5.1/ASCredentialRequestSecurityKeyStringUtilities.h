@interface ASCredentialRequestSecurityKeyStringUtilities : NSObject
+ (id)titleWithPresentationContext:;
+ (id)messageWithPresentationContext:;
+ (id)activateSecurityKeyAgainMessageText;
+ (id)_registerSecurityKeyMessageTextWithPresentationContext:;
+ (id)_multipleAllowedSecurityKeysMessageTextWithPresentationContext:;
+ (id)_basicAssertionMessageTextWithPresentationContext:;
@end

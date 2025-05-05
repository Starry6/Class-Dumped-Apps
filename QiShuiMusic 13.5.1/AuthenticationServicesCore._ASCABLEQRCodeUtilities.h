@interface AuthenticationServicesCore._ASCABLEQRCodeUtilities : NSObject
- (id)init;
+ (BOOL)isPasskeyURL:;
+ (BOOL)isPasskeyRegistrationURL:;
+ (long long)passkeyURLTypeFromURL:;
@end

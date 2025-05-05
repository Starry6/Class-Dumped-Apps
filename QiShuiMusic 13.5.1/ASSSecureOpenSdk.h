@interface ASSSecureOpenSdk : NSObject
+ (id)getExactID;
+ (id)getTokenResult;
+ (void)initToken:appKeyClient:callback:;
+ (void)initToken:appKeyClient:parameters:callback:;
+ (void)setRpcConfiguration:;
+ (void)updateToken:appKeyClient:parameters:callback:;
+ (void)setGatewayAddress:;
@end

@interface APDID : NSObject
+ (id)getResultToken;
+ (id)getResultToken:appKeyClient:;
+ (id)getTokenResult;
+ (id)getTokenResult:appKeyClient:;
+ (void)initToken:appKeyClient:callback:;
+ (void)initToken:appKeyClient:sessionId:callback:;
+ (void)initToken:callback:;
+ (void)updateToken:callback:;
+ (id)getToken;
@end

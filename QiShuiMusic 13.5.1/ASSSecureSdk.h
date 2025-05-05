@interface ASSSecureSdk : NSObject
+ (id)getTokenResult;
+ (id)getUtdid;
+ (void)initToken:parameters:callback:;
+ (void)initToken:utdid:tid:callback:;
+ (id)loadTrustData;
+ (void)saveTrustData:;
@end

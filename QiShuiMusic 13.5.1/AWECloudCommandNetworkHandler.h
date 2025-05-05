@interface AWECloudCommandNetworkHandler : NSObject
@property (nonatomic) <AWECloudCommandNetworkDelegate> networkDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_requestBodyWithParams:;
- (id)_requestUrlWithParams:baseUrl:;
- (id)_requestWithUrl:requestMethod:requestHeaders:;
- (void)requestWithUrl:method:params:requestHeaders:completion:;
- (void)uploadWithUrl:data:requestHeaders:completion:;
- (void).cxx_destruct;
- (id)networkDelegate;
- (void)setNetworkDelegate:;
+ (id)sharedInstance;
@end

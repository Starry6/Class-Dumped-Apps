@interface UANetworking : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSOperationQueue networkQueue;
- (void)startNetworkInService:forType:request:configuration:completion:;
- (void)startNetworkInService:forType:request:completion:;
- (void)startTask:withRequest:configuration:redirection:completion:;
- (id)taskCallbackForType:request:redirection:completion:;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (id)networkQueue;
- (void)setNetworkQueue:;
@end

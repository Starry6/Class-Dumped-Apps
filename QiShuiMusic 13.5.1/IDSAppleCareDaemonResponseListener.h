@interface IDSAppleCareDaemonResponseListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)daemonDisconnected;
- (void)applecareResponseForRequestID:withError:;
- (id)initWithRequestTimer:;
- (id)initWithDisconnectedBlockAndNoTimeout:;
@end

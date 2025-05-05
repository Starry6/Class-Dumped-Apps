@interface RMConnectionClient : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)endpoint:didReceiveMessage:withData:replyBlock:;
- (void)endpoint:didReceiveStreamedData:;
- (void)endpointWasInterrupted:;
- (void)endpointWasInvalidated:;
@end

@interface AFRemoteRequest : NSObject
@property (nonatomic) AFRequestInfo info;
@property (nonatomic) NSString peerIdentifier;
- (id)peerIdentifier;
- (id)initWithInfo:;
- (void).cxx_destruct;
- (id)info;
- (void)setPeerIdentifier:;
- (void)sendWithCompletion:;
@end

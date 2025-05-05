@interface CLIntersiloProxyToInitiator : CLIntersiloProxy
@property (nonatomic) CLIntersiloProxy peer;
- (id)peer;
- (id)initWithDelegateObject:delegateSilo:uninitializedPeer:;
- (void).cxx_destruct;
@end

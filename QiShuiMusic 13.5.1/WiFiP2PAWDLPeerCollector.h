@interface WiFiP2PAWDLPeerCollector : NSObject
@property (nonatomic) NSMutableArray peers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)peers;
- (void)setPeers:;
- (void)addedPeerWithInformation:completion:;
@end

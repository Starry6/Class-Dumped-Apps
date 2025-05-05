@interface CBSpatialInteractionPeerInfoClient : NSObject
@property (nonatomic) I peerID;
@property (nonatomic) NSData tokenData;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) I uwbTokenFlags;
- (id)userInfo;
- (unsigned int)peerID;
- (void)setTokenData:;
- (void)setUserInfo:;
- (unsigned int)uwbTokenFlags;
- (void).cxx_destruct;
- (void)setPeerID:;
- (void)setUwbTokenFlags:;
- (id)tokenData;
@end

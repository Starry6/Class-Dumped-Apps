@interface AWEIMPeerABValue : NSObject
@property (nonatomic) NSString peerSecUid;
@property (nonatomic) NSString abKey;
@property (nonatomic) BOOL abValue;
- (BOOL)abValue;
- (id)peerSecUid;
- (void)setPeerSecUid:;
- (id)abKey;
- (void)setAbKey:;
- (void)setAbValue:;
- (void).cxx_destruct;
@end

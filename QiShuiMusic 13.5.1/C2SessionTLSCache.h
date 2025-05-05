@interface C2SessionTLSCache : NSObject
@property (nonatomic) C2Session pinnedSession;
@property (nonatomic) C2Session unpinnedSession;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sessionForOptions:;
- (id)init;
- (void)C2Session:didBecomeInvalidWithError:;
- (id)underlyingDelegateQueue;
- (id)unpinnedSession;
- (void)setPinnedSession:;
- (void).cxx_destruct;
- (void)setUnpinnedSession:;
- (id)pinnedSession;
- (id)_createSessionWithTLSPinning:;
- (void)C2Session:originalHost:updatedRoute:;
@end

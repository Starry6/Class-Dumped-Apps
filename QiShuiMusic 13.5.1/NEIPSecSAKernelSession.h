@interface NEIPSecSAKernelSession : NEIPSecSASession
- (void)dealloc;
- (id)description;
- (void)setDelegateQueue:;
- (void)invalidate;
- (id)initWithName:delegate:;
- (void)removeAllSAs;
- (BOOL)addLarvalSA:;
- (BOOL)updateSA:;
- (BOOL)addSA:;
- (BOOL)removeSA:;
- (BOOL)migrateSA:;
- (void)startIdleTimeout:incomingSA:outgoingSA:;
- (void)startBlackholeDetection:incomingSA:outgoingSA:;
- (id)initWithName:delegate:pfkeySocket:;
@end

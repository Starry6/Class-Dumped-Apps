@interface NEIPSecSASession : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSObject<NEIPSecSASessionDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) NSArray securityAssociations;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegateQueue;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setDelegateQueue:;
- (void)invalidate;
- (id)initWithName:delegate:;
- (id)copyEmptySASession;
- (void)removeAllSAs;
- (BOOL)addLarvalSA:;
- (BOOL)updateSA:;
- (BOOL)addSA:;
- (BOOL)removeSA:;
- (BOOL)migrateSA:;
- (void)startIdleTimeout:incomingSA:outgoingSA:;
- (void)startBlackholeDetection:incomingSA:outgoingSA:;
- (id)securityAssociations;
@end

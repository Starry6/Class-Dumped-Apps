@interface SecEscrowRequest : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (BOOL)cachePrerecord:serializedPrerecord:error:;
- (BOOL)escrowCompletedWithinLastSeconds:;
- (id)fetchRequestWaitingOnPasscode:;
- (BOOL)triggerEscrowUpdate:options:error:;
- (BOOL)resetAllRequests:;
- (BOOL)pendingEscrowUpload:;
- (unsigned long long)storePrerecordsInEscrow:;
- (id)connection;
- (void).cxx_destruct;
- (id)fetchPrerecord:error:;
- (void)setConnection:;
- (BOOL)triggerEscrowUpdate:error:;
- (id)fetchStatuses:;
- (id)initWithConnection:;
+ (id)request:;
@end

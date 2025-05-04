@interface AWEIMBatchFetchUserSession : NSObject
@property (nonatomic) NSMutableArray users;
@property (nonatomic) NSString ownerID;
@property (nonatomic) NSString ownerSecID;
@property (nonatomic) <AWEIMBatchFetchUserSessionDelegate> delegate;
@property (nonatomic) NSMutableArray successUserModels;
@property (nonatomic) NSMutableArray failedUserIDs;
- (void)fetchUsers:completion:;
- (id)ownerSecID;
- (void)setOwnerSecID:;
- (id)successUserModels;
- (id)failedUserIDs;
- (void)p_fetchOnePageUser:;
- (void)p_fetchUsers:completion:;
- (void)p_finishSession;
- (void)setSuccessUserModels:;
- (void)setFailedUserIDs:;
- (id)delegate;
- (id)users;
- (void).cxx_destruct;
- (void)startSession;
- (void)setDelegate:;
- (void)setUsers:;
- (id)ownerID;
- (id)initWithUsers:;
- (void)setOwnerID:;
@end

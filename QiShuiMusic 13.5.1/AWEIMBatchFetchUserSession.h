@interface AWEIMBatchFetchUserSession : NSObject
@property (nonatomic) NSMutableArray users;
@property (nonatomic) <AWEIMBatchFetchUserSessionDelegate> delegate;
@property (nonatomic) NSMutableArray successUserModels;
@property (nonatomic) NSMutableArray failedUserIDs;
- (void)p_finishSession;
- (id)failedUserIDs;
- (void)p_fetchOnePageUser:;
- (void)p_fetchUsers:completion:;
- (void)setFailedUserIDs:;
- (void)setSuccessUserModels:;
- (id)successUserModels;
- (id)users;
- (void)setDelegate:;
- (void)startSession;
- (id)delegate;
- (void).cxx_destruct;
- (void)setUsers:;
- (id)initWithUsers:;
@end

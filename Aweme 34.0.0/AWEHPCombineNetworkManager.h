@interface AWEHPCombineNetworkManager : NSObject
@property (nonatomic) q sessionID;
@property (nonatomic) NSLock lock;
- (void)sendRequests:completion:;
- (void)p_sendRequests:completion:;
- (long long)p_incrementSessionID;
- (long long)p_getSessionID;
- (void)p_requestCombineDataWithURL:requestScene:headerBody:sessionID:userID:retryCount:completion:;
- (void)setSessionID:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (long long)sessionID;
- (void).cxx_destruct;
@end

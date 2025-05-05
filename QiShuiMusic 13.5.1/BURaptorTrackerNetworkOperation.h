@interface BURaptorTrackerNetworkOperation : NSOperation
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (nonatomic) NSArray modelArray;
@property (nonatomic) <BURaptorTrackerNetworkOperationDelegate> delegate;
@property (nonatomic) q sendIndex;
- (id)initWithModelArray:;
- (id)modelArray;
- (void)safeDelegate_operation:sendWithModelArray:completionHandler:;
- (long long)sendIndex;
- (void)setModelArray:;
- (void)setSendIndex:;
- (void)setFinished:;
- (void)start;
- (BOOL)isConcurrent;
- (void)setDelegate:;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)delegate;
- (void).cxx_destruct;
- (void)setExecuting:;
@end

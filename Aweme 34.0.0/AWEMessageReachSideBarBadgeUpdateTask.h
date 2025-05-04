@interface AWEMessageReachSideBarBadgeUpdateTask : NSObject
@property (nonatomic) Q taskID;
@property (nonatomic) <AWEMessageReachSideBarNoticeInfoUpdateProtocol> updateInfo;
@property (nonatomic) @? strategyCompletionBlock;
@property (nonatomic) BOOL hasInvokeCompletion;
@property (nonatomic) AWEMRSideBarBagdeStrategyResultModel strategyResultModel;
@property (nonatomic) BOOL isFromRetry;
- (id)strategyCompletionBlock;
- (void)setStrategyCompletionBlock:;
- (BOOL)isFromRetry;
- (void)setIsFromRetry:;
- (BOOL)hasInvokeCompletion;
- (void)setHasInvokeCompletion:;
- (void)setStrategyResultModel:;
- (id)strategyResultModel;
- (void)invokeCompletionBlockWithStrategyResult:componentModel:;
- (id)description;
- (void).cxx_destruct;
- (void)setTaskID:;
- (unsigned long long)taskID;
- (void)setUpdateInfo:;
- (id)updateInfo;
- (id)initWithTaskID:;
+ (id)createUpdateTaskWithUpdateInfo:strategyCompletionBlock:;
@end

@interface AWEPublishStageOperation : NSOperation
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (nonatomic) <AWEPublishStageProtocol> publishStage;
@property (nonatomic) AWEPublishBaseTask host;
@property (nonatomic) q stageIndex;
- (id)initWithPublishStage:;
- (id)publishStage;
- (void)setPublishStage:;
- (void)setHost:;
- (id)host;
- (BOOL)isAsynchronous;
- (void)dealloc;
- (void)setFinished:;
- (BOOL)isExecuting;
- (void)main;
- (void)finish;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)setExecuting:;
- (void)start;
- (long long)stageIndex;
- (void)setStageIndex:;
@end

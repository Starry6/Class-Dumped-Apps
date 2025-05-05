@interface IESLiveProcessNodeTask : NSObject
@property (nonatomic) Q taskType;
@property (nonatomic) @ dataSource;
@property (nonatomic) IESLivePublicScreenNodeStyleConfig nodeStyleConfig;
@property (nonatomic) @? completion;
@property (nonatomic) <IESLiveMessageNodeStrategyProtocol> customNodeStrategy;
- (id)nodeStyleConfig;
- (id)customNodeStrategy;
- (id)initWithType:dataSource:styleConfig:completion:;
- (void)setCustomNodeStrategy:;
- (void)setNodeStyleConfig:;
- (id)completion;
- (void)setCompletion:;
- (void)setDataSource:;
- (unsigned long long)taskType;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setTaskType:;
@end

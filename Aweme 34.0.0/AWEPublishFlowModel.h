@interface AWEPublishFlowModel : MTLModel
@property (nonatomic) AWEPublishFlowRepoContextModel repoContext;
@property (nonatomic) AWEPublishFlowRepoTaskModel repoTask;
@property (nonatomic) NSMutableDictionary extensionModels;
@property (nonatomic) NSString flowId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)setExtensionModelByClass:;
- (id)repoContext;
- (id)extensionModelOfClass:;
- (void)removeExtensionModel:;
- (id)repoTask;
- (id)extensionModels;
- (void)setExtensionModels:;
- (void)setFlowId:;
- (void).cxx_destruct;
- (id)flowId;
+ (void)retriveTaskInfoToFlowModel:;
+ (BOOL)cacheTaskInfo:;
+ (BOOL)invalidateCacheTaskInfo:;
@end

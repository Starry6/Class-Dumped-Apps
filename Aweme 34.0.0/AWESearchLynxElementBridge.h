@interface AWESearchLynxElementBridge : NSObject
@property (nonatomic) NSMapTable lynxContainerElementTable;
@property (nonatomic) NSMapTable lynxContainerTable;
- (id)elementWithContainerID:;
- (void)registElementView:withContainerID:;
- (void)clearElementTable;
- (void)registContainer:withContainerID:;
- (id)containerWithID:;
- (id)lynxContainerElementTable;
- (id)lynxContainerTable;
- (void)registElementView:withSessionId:withContainerId:;
- (id)awemeModelForSessionId:withSearchModelIndex:cacheKey:containerId:;
- (void)setLynxContainerElementTable:;
- (void)setLynxContainerTable:;
- (void).cxx_destruct;
+ (BOOL)searchLynxEngineShouldUseSearchDynamic;
+ (id)shareInstance;
@end

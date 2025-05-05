@interface IESLiveSaaSPuzzleHybridRouter : NSObject
@property (nonatomic) IESLiveSaaSHYRouterIMP hybridRouter;
@property (nonatomic) PuzzleSchemaParamsHandler schemaHandler;
- (id)hybridContainerWithSchema:preferredFrame:lifeCycleDelegate:;
- (id)hybridContainerWithSchema:preferredFrame:lifeCycleDelegate:initialData:;
- (id)hybridRouter;
- (BOOL)isWhiteList:;
- (id)openHybridWithParam:eventParams:;
- (id)openHybridWithParam:eventParams:router:;
- (id)schemaHandler;
- (void)setHybridRouter:;
- (void)setSchemaHandler:;
- (id)setupContext:;
- (id)setupContext:params:;
- (id)topHost:;
- (void).cxx_destruct;
- (id)allowList;
+ (void)dismissNewHybridPopupWithKernalType:rootVC:isBottom:removeOne:;
@end

@interface IESGurdResourceModelManager : NSObject
@property (nonatomic) NSMutableDictionary resourceModelsMap;
- (void)addModelWithoutLock:;
- (void)addModels:;
- (void)clearAllModel;
- (id)getModel:channel:;
- (id)modelsWithLazyParams:;
- (void)removeModel:channel:;
- (void)removeModel:channel:version:;
- (id)resourceModelsMap;
- (void)setResourceModelsMap:;
- (void).cxx_destruct;
- (void)addModel:;
+ (id)sharedManager;
@end

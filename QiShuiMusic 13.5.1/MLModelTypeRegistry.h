@interface MLModelTypeRegistry : NSObject
- (id)init;
- (id)classesForLoadingModelType:isUpdatable:trainWithMLCompute:;
- (id)loadNeuralNetworkClasses:trainWithMLCompute:;
- (id)classesForLoadingModelType:;
- (Class)classForCompilingModelType:;
+ (id)sharedInstance;
@end

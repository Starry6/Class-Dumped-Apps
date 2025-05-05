@interface IESLivePreloadRequestInjection : NSObject
@property (nonatomic) NSMutableSet classesSet;
@property (nonatomic) NSMutableSet backendClassesSet;
- (id)backendClassesSet;
- (id)classesSet;
- (void)loadActionRegistry;
- (void)setBackendClassesSet:;
- (void)setClassesSet:;
- (id)init;
- (void).cxx_destruct;
+ (id)instance;
@end

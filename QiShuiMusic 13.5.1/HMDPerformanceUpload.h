@interface HMDPerformanceUpload : NSObject
@property (nonatomic) HMDDebugRealConfig debugRealConfig;
@property (nonatomic) NSObject<OS_dispatch_queue> operationQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)debugRealConfig;
- (void)excuteCommand:completion:;
- (void)fetchPerformanceDataWithCallback:;
- (void)oldExecuteCommand:completion:;
- (void)refactorExecuteCommand:completion:;
- (void)setDebugRealConfig:;
- (id)init;
- (id)operationQueue;
- (void).cxx_destruct;
- (void)setOperationQueue:;
+ (id)createInstance;
@end

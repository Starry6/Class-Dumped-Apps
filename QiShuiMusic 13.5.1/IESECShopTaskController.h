@interface IESECShopTaskController : IESECRelationController
@property (nonatomic) NSCache operationsDict;
@property (nonatomic) NSOperationQueue mainQueue;
@property (nonatomic) NSOperationQueue multiQueue;
@property (nonatomic) BOOL hasRunSignal;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setup;
- (void)commitOperation:signalType:;
- (BOOL)hasRunSignal;
- (id)multiQueue;
- (id)operationsDict;
- (void)runFMPSignal;
- (void)runOnSignal:;
- (void)runTasksOnMainThreadIdle:;
- (void)setHasRunSignal:;
- (void)setOperationsDict:;
- (id)init;
- (void)dealloc;
- (id)mainQueue;
- (void).cxx_destruct;
@end

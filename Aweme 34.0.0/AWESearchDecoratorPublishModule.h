@interface AWESearchDecoratorPublishModule : NSObject
@property (nonatomic) AWESearchDecoratorManagerContext managerContext;
@property (nonatomic) NSMutableDictionary publishTaskMap;
@property (nonatomic) <AWESearchDecoratorPublishDelegateProtocol> publishDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (void)removePublishTask:;
- (void)setManagerContext:;
- (void)updateWithManagerContext:;
- (void)onDecoratorModuleRemoved;
- (id)managerContext;
- (id)publishTaskMap;
- (id)publishDelegate;
- (void)startPublishWithShotContext:completion:;
- (void)markCurrentPublishTaskExpired;
- (BOOL)containerIsPublishingTaskForId:;
- (void)setPublishDelegate:;
- (void)setPublishTaskMap:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end

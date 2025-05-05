@interface IESECSKUTaskManager : NSObject
@property (nonatomic) IESECSKUTaskContext taskContext;
@property (nonatomic) NSMutableDictionary taskModelMapping;
@property (nonatomic) @? runTask;
@property (nonatomic) @? runTaskWithCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTaskContext:;
- (id)newTaskFromClass:;
- (void)registerTaskModel;
- (id)runTaskWithCompletion;
- (void)setTaskModelMapping:;
- (id)taskKeyFromActionType:isMultiSKU:;
- (id)taskModelMapping;
- (id)run;
- (void).cxx_destruct;
- (id)initWithTaskContext:;
- (id)taskContext;
- (id)runTask;
@end

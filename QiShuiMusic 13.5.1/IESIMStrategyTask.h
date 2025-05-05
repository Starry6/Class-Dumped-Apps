@interface IESIMStrategyTask : NSObject
@property (nonatomic) @? task;
@property (nonatomic) NSString taskID;
@property (nonatomic) <IESIMStrategyTaskDelegate> delegate;
- (id)initWithTask:identifier:;
- (void)startTask;
- (void)setDelegate:;
- (id)task;
- (void)setTaskID:;
- (void)setTask:;
- (id)delegate;
- (void).cxx_destruct;
- (id)taskID;
- (void)finishTask;
@end

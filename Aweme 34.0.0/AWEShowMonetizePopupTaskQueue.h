@interface AWEShowMonetizePopupTaskQueue : NSObject
@property (nonatomic) NSMutableDictionary tasksByType;
@property (nonatomic) NSMutableArray tasks;
@property (nonatomic) NSString name;
@property (nonatomic) @? didStart;
@property (nonatomic) @? didFinish;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tasksByType;
- (void)runTargetTaskOrFinish:canRunNext:;
- (void)addPopupCouponTaskWithReferString:aweme:containerID:trackParamsHandler:;
- (void)addPopupGiftTicketTaskWithGiftTicketJson:aweme:containerID:trackParamsHandler:;
- (void)setTasksByType:;
- (void)run;
- (void)addTask:;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)name;
- (void)setTasks:;
- (id)tasks;
- (id)didFinish;
- (void)setDidFinish:;
- (id)didStart;
- (void)setDidStart:;
@end

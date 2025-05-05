@interface HTSShareActivityCompletionHandler : NSObject
@property (nonatomic) BOOL completed;
@property (nonatomic) NSString activityType;
@property (nonatomic) NSError activityError;
@property (nonatomic) NSArray returnedItems;
@property (nonatomic) @? finalCompletion;
- (void)completeWithActivityType:completed:returnedItems:activityError:;
- (id)finalCompletion;
- (id)activityError;
- (void)setActivityError:;
- (void)setFinalCompletion:;
- (id)activityType;
- (void)setActivityType:;
- (void)dealloc;
- (void)setCompleted:;
- (void).cxx_destruct;
- (BOOL)completed;
- (id)returnedItems;
- (void)setReturnedItems:;
- (id)initWithActivityViewController:;
@end

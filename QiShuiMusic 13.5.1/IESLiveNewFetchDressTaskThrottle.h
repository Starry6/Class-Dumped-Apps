@interface IESLiveNewFetchDressTaskThrottle : NSObject
@property (nonatomic) IESLiveNewFetchDressTask task;
@property (nonatomic) double duration;
@property (nonatomic) <IESLiveNewFetchDressTaskThrottleDelegate> delegate;
- (void)appendTask:;
- (void)handleTask;
- (void)thorttle;
- (id)init;
- (void)setDelegate:;
- (id)task;
- (void)setDuration:;
- (void)setTask:;
- (id)delegate;
- (void).cxx_destruct;
- (double)duration;
@end

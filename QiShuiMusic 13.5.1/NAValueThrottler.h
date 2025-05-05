@interface NAValueThrottler : NSObject
@property (nonatomic) NSMutableSet observerBlocks;
@property (nonatomic) <NACancelable> valueUpdateCancelationToken;
@property (nonatomic) double throttleInterval;
@property (nonatomic) <NAScheduler> updateScheduler;
@property (nonatomic) @ value;
@property (nonatomic) BOOL hasPendingValueChange;
- (id)init;
- (void)dealloc;
- (id)updateScheduler;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)initWithThrottleInterval:;
- (id)initWithThrottleInterval:initialValue:;
- (void)setUpdateScheduler:;
- (void)_enqueueValueUpdateIfNecessary;
- (void)_notifyObserversOfValueUpdate;
- (id)observeValueChangesWithBlock:;
- (void)flushValueChanges;
- (BOOL)hasPendingValueChange;
- (double)throttleInterval;
- (id)observerBlocks;
- (id)valueUpdateCancelationToken;
- (void)setValueUpdateCancelationToken:;
- (void)setValue:notifyObservers:;
@end

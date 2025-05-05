@interface CKCoalescer : NSObject
@property (nonatomic) @? notifyBlock;
@property (nonatomic) Q activityDelay;
@property (nonatomic) Q maxActivityDelay;
@property (nonatomic) Q coalescingInterval;
@property (nonatomic) Q processingDelay;
- (unsigned long long)maxActivityDelay;
- (void)dealloc;
- (id)initWithActivityDelay:maxActivityDelay:coalescingInterval:processingDelay:notifyBlock:;
- (void)setActivityDelay:;
- (void)finish:;
- (void)coalesce:;
- (unsigned long long)activityDelay;
- (id)initWithNotifyBlock:;
- (void)delayPostBy:;
- (void)setProcessingDelay:;
- (void)postFinishedNotice;
- (unsigned long long)processingDelay;
- (id)initWithNotifyFrequency:notifyBlock:;
- (void).cxx_destruct;
- (void)postNotice;
- (void)setCoalescingInterval:;
- (unsigned long long)coalescingInterval;
- (void)processingComplete;
- (id)notifyBlock;
- (void)mutate:;
- (void)setMaxActivityDelay:;
@end

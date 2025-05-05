@interface STDebouncer : NSObject
@property (nonatomic) double minCoalescenceInterval;
@property (nonatomic) double maxCoalescenceInterval;
@property (nonatomic) @ value;
@property (nonatomic) <STDebouncerDelegate> delegate;
- (void)_delegate;
- (void)setDelegate:;
- (void)bounce:;
- (void)setValue:;
- (void)setMaxCoalescenceInterval:;
- (double)maxCoalescenceInterval;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithMinCoalescenceInterval:maxCoalescenceInterval:;
- (id)value;
- (void)_idle;
- (double)minCoalescenceInterval;
- (void)setMinCoalescenceInterval:;
- (void)_timeout;
@end

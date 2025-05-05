@interface OSActivityLossEvent : OSActivityEvent
@property (nonatomic) Q startMachTimestamp;
@property (nonatomic) Q endMachTimestamp;
@property (nonatomic) I count;
@property (nonatomic) BOOL saturated;
- (unsigned int)count;
- (void)_addProperties:;
- (id)initWithEntry:;
- (unsigned long long)startMachTimestamp;
- (unsigned long long)endMachTimestamp;
- (BOOL)saturated;
@end

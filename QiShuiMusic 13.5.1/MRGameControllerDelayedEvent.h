@interface MRGameControllerDelayedEvent : NSObject
@property (nonatomic) Q lastDownEvent;
@property (nonatomic) @? sendEventBlock;
- (void)send;
- (void).cxx_destruct;
- (unsigned long long)lastDownEvent;
- (void)setLastDownEvent:;
- (id)sendEventBlock;
- (void)setSendEventBlock:;
@end

@interface MNAudioSystemEventQueue : NSObject
@property (nonatomic) <MNAudioEventQueueDelegate> delegate;
@property (nonatomic) Q capacity;
@property (nonatomic) Q count;
@property (nonatomic) BOOL empty;
@property (nonatomic) BOOL full;
- (unsigned long long)capacity;
- (void)setDelegate:;
- (id)dequeue;
- (BOOL)empty;
- (void)clear;
- (id)delegate;
- (void).cxx_destruct;
- (id)_dequeue;
- (unsigned long long)count;
- (void)_enqueue:;
- (id)initWithCapacity:;
- (BOOL)full;
- (BOOL)enqueue:withOptions:andReport:;
- (void)_removeEventsMatching:;
@end

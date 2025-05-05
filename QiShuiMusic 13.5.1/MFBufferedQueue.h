@interface MFBufferedQueue : NSObject
@property (nonatomic) I size;
@property (nonatomic) I maximumSize;
@property (nonatomic) double maximumLatency;
- (unsigned long long)sizeForItem:;
- (BOOL)addItem:;
- (id)init;
- (BOOL)isEmpty;
- (void)setMaximumSize:;
- (BOOL)_flush;
- (void)removeAllObjects;
- (BOOL)flush;
- (void).cxx_destruct;
- (unsigned int)maximumSize;
- (unsigned int)size;
- (id)initWithMaximumSize:latency:;
- (BOOL)flushIfNecessary;
- (BOOL)handleItems:;
- (double)maximumLatency;
- (void)setMaximumLatency:;
@end

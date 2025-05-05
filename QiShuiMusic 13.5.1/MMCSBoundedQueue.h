@interface MMCSBoundedQueue : NSObject
@property (nonatomic) NSMutableArray entries;
@property (nonatomic) ^{dispatch_semaphore_s=} boundsExceeded;
@property (nonatomic) Q bytesUpperBound;
@property (nonatomic) Q bytesErrorLevel;
@property (nonatomic) BOOL isValid;
- (void)setEntries:;
- (void)dealloc;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)entries;
- (void)invalidate;
- (void)addData:;
- (unsigned long long)bytesUpperBound;
- (id)initWithUpperBound:;
- (unsigned long long)_sync_aggregateByteCount;
- (BOOL)_sync_isFull;
- (void)removeNextDataWithBlock:;
- (unsigned long long)bytesErrorLevel;
- (void)setBytesErrorLevel:;
- (id)boundsExceeded;
- (void)setBoundsExceeded:;
@end

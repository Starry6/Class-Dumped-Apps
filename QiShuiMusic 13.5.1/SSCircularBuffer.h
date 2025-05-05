@interface SSCircularBuffer : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> accessQueue;
@property (nonatomic) Q currentIndex;
@property (nonatomic) NSMutableArray buffer;
@property (nonatomic) Q count;
@property (nonatomic) Q maxSize;
- (void)setAccessQueue:;
- (void)setBuffer:;
- (unsigned long long)maxSize;
- (id)accessQueue;
- (void)setMaxSize:;
- (id)init;
- (id)buffer;
- (void)setCurrentIndex:;
- (id)_flush;
- (void)addObject:;
- (id)flush;
- (id)initWithMaxSize:;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
- (id)description;
- (id)allObjects;
- (unsigned long long)count;
+ (id)_rearrangeObjects:forCurrentIndex:;
@end

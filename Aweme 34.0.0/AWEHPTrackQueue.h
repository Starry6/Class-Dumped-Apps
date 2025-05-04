@interface AWEHPTrackQueue : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSMutableArray queue;
@property (nonatomic) q size;
- (void)setLock:;
- (void)setQueue:;
- (id)lock;
- (id)initWithSize:;
- (long long)size;
- (void).cxx_destruct;
- (void)setSize:;
- (id)getQueue;
- (id)queue;
- (void)addItem:;
@end

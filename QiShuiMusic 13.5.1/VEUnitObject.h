@interface VEUnitObject : IESMMObject
@property (nonatomic) VEReadWriteLock rwLock;
@property (nonatomic) NSMutableArray downStreams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)downStreamsCopy;
- (void)setDownStreams:;
- (void)addDownStream:;
- (void)addDownStream:atIndex:;
- (id)downStreams;
- (void)removeAllDownStreams;
- (void)removeDownStream:;
- (void)removeDownStreamAtIndexs:;
- (id)rwLock;
- (void)setRwLock:;
- (id)init;
- (void).cxx_destruct;
@end

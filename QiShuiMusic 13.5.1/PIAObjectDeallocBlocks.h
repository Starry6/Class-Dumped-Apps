@interface PIAObjectDeallocBlocks : NSObject
@property (nonatomic) @ parent;
@property (nonatomic) NSRecursiveLock locker;
@property (nonatomic) NSMutableArray blockArray;
- (void)addDeallocBlock:;
- (id)blockArray;
- (id)initWithParent:deallocBlock:;
- (id)locker;
- (void)setBlockArray:;
- (void)setLocker:;
- (void)setParent:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)parent;
@end

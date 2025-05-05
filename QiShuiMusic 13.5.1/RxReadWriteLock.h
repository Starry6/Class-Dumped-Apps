@interface RxReadWriteLock : NSObject
@property (nonatomic) <RxLocking> readLock;
@property (nonatomic) <RxLocking> writeLock;
@property (nonatomic) NSString name;
- (id)init;
- (id)initWithName:;
- (id)debugDescription;
- (id)writeLock;
- (BOOL)isReading;
- (void).cxx_destruct;
- (id)name;
- (id).cxx_construct;
- (BOOL)isWriting;
- (id)readLock;
+ (id)new;
@end

@interface ASCPendingPromises : NSObject
@property (nonatomic) NSRecursiveLock stateLock;
@property (nonatomic) NSMutableArray binaryPromisesIfLoaded;
@property (nonatomic) NSMutableArray binaryPromises;
@property (nonatomic) NSMutableArray promisesIfLoaded;
@property (nonatomic) NSMutableArray promises;
@property (nonatomic) BOOL hasPromises;
- (id)init;
- (id)stateLock;
- (void).cxx_destruct;
- (void)withLock:;
- (void)cancelAll;
- (id)promises;
- (id)binaryPromises;
- (BOOL)containsBinaryPromise:;
- (void)addBinaryPromise:;
- (BOOL)hasPromises;
- (BOOL)containsPromise:;
- (void)addPromise:;
- (void)enumerateBinaryPromises:andPromises:;
- (void)finishAllWithError:;
- (id)binaryPromisesIfLoaded;
- (void)setBinaryPromisesIfLoaded:;
- (id)promisesIfLoaded;
- (void)setPromisesIfLoaded:;
@end

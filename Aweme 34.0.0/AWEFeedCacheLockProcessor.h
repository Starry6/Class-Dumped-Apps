@interface AWEFeedCacheLockProcessor : NSObject
@property (nonatomic) BOOL isLock;
@property (nonatomic) OnceLock process_lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLock;
- (id)onProcess:context:;
- (id)process_lock;
- (id)initWithLock:isLock:;
- (void)setProcess_lock:;
- (void)setIsLock:;
- (void).cxx_destruct;
@end

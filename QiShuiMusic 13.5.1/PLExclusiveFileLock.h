@interface PLExclusiveFileLock : NSObject
@property (nonatomic) BOOL isLocked;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLocked;
- (id)init;
- (void)dealloc;
- (id)initWithURL:;
- (void)unlock;
- (void).cxx_destruct;
- (BOOL)lockWithError:;
- (id)lockData;
- (id)lockFailure;
@end

@interface CNBinarySemaphoreLock : NSObject
@property (nonatomic) NSString name;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (void)unlock;
- (void)lock;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)invalidate;
@end

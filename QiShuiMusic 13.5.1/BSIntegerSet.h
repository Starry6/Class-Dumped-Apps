@interface BSIntegerSet : NSObject
@property (nonatomic) Q count;
- (id)init;
- (void)enumerateWithBlock:;
- (unsigned long long)hash;
- (BOOL)containsValue:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (void)enumerateSortedWithBlock:;
- (BOOL)isEqual:;
- (id)initWithCapacity:;
- (id)copyWithZone:;
@end

@interface BSIntegerMap : NSObject
@property (nonatomic) Q count;
- (BOOL)containsObjectForKey:;
- (id)init;
- (void)enumerateWithBlock:;
- (id)allKeys;
- (unsigned long long)hash;
- (void)enumerateKeysWithBlock:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)allValues;
- (id)description;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)initWithCapacity:;
- (id)copyWithZone:;
@end

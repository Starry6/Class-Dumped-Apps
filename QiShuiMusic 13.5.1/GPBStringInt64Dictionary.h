@interface GPBStringInt64Dictionary : NSObject
@property (nonatomic) Q count;
- (void)setGPBGenericValue:forGPBGenericValueKey:;
- (void)removeAll;
- (id)init;
- (void)dealloc;
- (void)enumerateForTextFormat:;
- (void)addEntriesFromDictionary:;
- (id)initWithDictionary:;
- (void)writeToCodedOutputStream:asField:;
- (unsigned long long)hash;
- (unsigned long long)computeSerializedSizeAsField:;
- (id)description;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)initWithCapacity:;
- (id)copyWithZone:;
- (id)initWithInt64s:forKeys:count:;
- (void)enumerateKeysAndInt64sUsingBlock:;
- (BOOL)getInt64:forKey:;
- (void)setInt64:forKey:;
- (void)removeInt64ForKey:;
@end

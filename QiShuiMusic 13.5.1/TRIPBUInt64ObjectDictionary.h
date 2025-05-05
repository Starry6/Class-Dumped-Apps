@interface TRIPBUInt64ObjectDictionary : NSObject
@property (nonatomic) Q count;
- (BOOL)isInitialized;
- (void)removeAll;
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (void)enumerateKeysAndObjectsUsingBlock:;
- (void)enumerateForTextFormat:;
- (void)addEntriesFromDictionary:;
- (id)initWithDictionary:;
- (void)setTRIPBGenericValue:forTRIPBGenericValueKey:;
- (void)writeToCodedOutputStream:asField:;
- (unsigned long long)hash;
- (id)initWithObjects:forKeys:count:;
- (unsigned long long)computeSerializedSizeAsField:;
- (id)objectForKey:;
- (id)description;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (BOOL)isEqual:;
- (id)initWithCapacity:;
- (id)copyWithZone:;
- (id)deepCopyWithZone:;
@end

@interface GPBInt32ObjectDictionary : NSObject
@property (nonatomic) Q count;
- (void)setGPBGenericValue:forGPBGenericValueKey:;
- (BOOL)isInitialized;
- (void)removeAll;
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (void)enumerateKeysAndObjectsUsingBlock:;
- (void)enumerateForTextFormat:;
- (void)addEntriesFromDictionary:;
- (id)initWithDictionary:;
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

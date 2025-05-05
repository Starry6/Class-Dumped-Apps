@interface GPBBoolUInt64Dictionary : NSObject
@property (nonatomic) Q count;
- (void)setGPBGenericValue:forGPBGenericValueKey:;
- (void)removeAll;
- (id)init;
- (void)setUInt64:forKey:;
- (void)enumerateForTextFormat:;
- (void)addEntriesFromDictionary:;
- (BOOL)getUInt64:forKey:;
- (id)initWithDictionary:;
- (void)writeToCodedOutputStream:asField:;
- (unsigned long long)hash;
- (unsigned long long)computeSerializedSizeAsField:;
- (id)description;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)initWithCapacity:;
- (id)copyWithZone:;
- (id)initWithUInt64s:forKeys:count:;
- (void)enumerateKeysAndUInt64sUsingBlock:;
- (void)removeUInt64ForKey:;
@end

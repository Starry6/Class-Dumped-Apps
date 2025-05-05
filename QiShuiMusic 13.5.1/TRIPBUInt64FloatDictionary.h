@interface TRIPBUInt64FloatDictionary : NSObject
@property (nonatomic) Q count;
- (void)removeAll;
- (id)init;
- (void)dealloc;
- (void)enumerateForTextFormat:;
- (void)addEntriesFromDictionary:;
- (id)initWithDictionary:;
- (void)setTRIPBGenericValue:forTRIPBGenericValueKey:;
- (void)writeToCodedOutputStream:asField:;
- (unsigned long long)hash;
- (void)setFloat:forKey:;
- (unsigned long long)computeSerializedSizeAsField:;
- (id)description;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)initWithCapacity:;
- (id)copyWithZone:;
- (id)initWithFloats:forKeys:count:;
- (void)enumerateKeysAndFloatsUsingBlock:;
- (BOOL)getFloat:forKey:;
- (void)removeFloatForKey:;
@end

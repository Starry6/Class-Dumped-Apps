@interface GPBBoolDoubleDictionary : NSObject
@property (nonatomic) Q count;
- (void)setGPBGenericValue:forGPBGenericValueKey:;
- (void)removeAll;
- (id)init;
- (void)setDouble:forKey:;
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
- (id)initWithDoubles:forKeys:count:;
- (void)enumerateKeysAndDoublesUsingBlock:;
- (BOOL)getDouble:forKey:;
- (void)removeDoubleForKey:;
@end

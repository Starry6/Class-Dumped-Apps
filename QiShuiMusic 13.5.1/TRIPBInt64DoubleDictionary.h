@interface TRIPBInt64DoubleDictionary : NSObject
@property (nonatomic) Q count;
- (void)removeAll;
- (id)init;
- (void)dealloc;
- (void)setDouble:forKey:;
- (void)enumerateForTextFormat:;
- (void)addEntriesFromDictionary:;
- (id)initWithDictionary:;
- (void)setTRIPBGenericValue:forTRIPBGenericValueKey:;
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

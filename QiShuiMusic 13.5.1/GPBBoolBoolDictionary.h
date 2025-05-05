@interface GPBBoolBoolDictionary : NSObject
@property (nonatomic) Q count;
- (void)setGPBGenericValue:forGPBGenericValueKey:;
- (void)removeAll;
- (id)init;
- (void)enumerateForTextFormat:;
- (void)addEntriesFromDictionary:;
- (void)setBool:forKey:;
- (id)initWithDictionary:;
- (void)writeToCodedOutputStream:asField:;
- (unsigned long long)hash;
- (unsigned long long)computeSerializedSizeAsField:;
- (id)description;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)initWithCapacity:;
- (id)copyWithZone:;
- (id)initWithBools:forKeys:count:;
- (void)enumerateKeysAndBoolsUsingBlock:;
- (BOOL)getBool:forKey:;
- (void)removeBoolForKey:;
@end

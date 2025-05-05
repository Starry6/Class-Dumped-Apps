@interface GPBInt64UInt32Dictionary : NSObject
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
- (id)initWithUInt32s:forKeys:count:;
- (void)enumerateKeysAndUInt32sUsingBlock:;
- (BOOL)getUInt32:forKey:;
- (void)setUInt32:forKey:;
- (void)removeUInt32ForKey:;
@end

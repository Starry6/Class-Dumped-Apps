@interface GPBStringInt32Dictionary : NSObject
@property (nonatomic) Q count;
- (void)setGPBGenericValue:forGPBGenericValueKey:;
- (void)removeAll;
- (id)init;
- (void)dealloc;
- (void)enumerateForTextFormat:;
- (void)addEntriesFromDictionary:;
- (id)initWithDictionary:;
- (void)writeToCodedOutputStream:asField:;
- (BOOL)getInt32:forKey:;
- (void)setInt32:forKey:;
- (unsigned long long)hash;
- (unsigned long long)computeSerializedSizeAsField:;
- (id)description;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)initWithCapacity:;
- (id)copyWithZone:;
- (id)initWithInt32s:forKeys:count:;
- (void)enumerateKeysAndInt32sUsingBlock:;
- (void)removeInt32ForKey:;
@end

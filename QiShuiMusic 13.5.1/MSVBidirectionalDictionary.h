@interface MSVBidirectionalDictionary : NSObject
- (id)init;
- (id)allKeys;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)keyForObject:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)bidirectionalDictionary;
@end

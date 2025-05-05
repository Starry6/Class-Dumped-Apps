@interface INSerializedCacheItem : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDictionary payload;
- (id)payload;
- (id)init;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithType:identifier:payload:;
+ (BOOL)supportsSecureCoding;
+ (void)deserializeCacheItems:completion:;
+ (void)deserializeCacheItem:completion:;
+ (void)serializeCacheableObjects:completion:;
@end

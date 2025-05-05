@interface NSURLQueryItem : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString value;
- (id)_geo_unescapedValue;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithName:value:;
- (void)encodeWithCoder:;
- (id)description;
- (id)value;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)queryItemsFromDictionary:;
+ (id)queryItemForHandleType:;
+ (id)queryItemValueForHandleType:;
+ (BOOL)automaticallyNotifiesObserversForKey:;
+ (BOOL)supportsSecureCoding;
+ (id)queryItemWithName:value:;
@end

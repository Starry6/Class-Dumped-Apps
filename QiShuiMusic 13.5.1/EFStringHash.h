@interface EFStringHash : NSObject
@property (nonatomic) q primitiveHash;
@property (nonatomic) q int64Value;
@property (nonatomic) NSString stringValue;
@property (nonatomic) NSString ef_publicDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_publicDescription;
- (long long)int64Value;
- (id)initWithString:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)stringValue;
- (long long)primitiveHash;
- (id)initWithData:;
- (id)_hexStringFromHash:;
- (id)initWithHash:;
- (id)initWithMD5Digest:;
- (id)description;
- (id)redactedStringValue;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

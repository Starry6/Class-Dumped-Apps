@interface LNEntityIdentifier : NSObject
@property (nonatomic) NSString typeName;
@property (nonatomic) NSString value;
@property (nonatomic) q scope;
@property (nonatomic) NSString typeIdentifier;
@property (nonatomic) NSString instanceIdentifier;
- (id)typeName;
- (long long)scope;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)typeIdentifier;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)instanceIdentifier;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTypeIdentifier:instanceIdentifier:;
- (id)initWithValue:typeName:;
- (id)initWithValue:scope:typeName:;
+ (BOOL)supportsSecureCoding;
@end

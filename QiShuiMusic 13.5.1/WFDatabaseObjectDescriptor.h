@interface WFDatabaseObjectDescriptor : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) Q objectType;
- (unsigned long long)objectType;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIdentifier:objectType:;
+ (BOOL)supportsSecureCoding;
@end

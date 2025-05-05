@interface LNEnumCaseMetadata : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) LNDisplayRepresentation displayRepresentation;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)displayRepresentation;
- (id)initWithIdentifier:displayRepresentation:;
+ (BOOL)supportsSecureCoding;
@end

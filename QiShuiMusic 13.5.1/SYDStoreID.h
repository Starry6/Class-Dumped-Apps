@interface SYDStoreID : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q type;
@property (nonatomic) NSString personaUniqueString;
- (id)personaUniqueString;
- (id)identifier;
- (void)setType:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (id)initWithIdentifier:type:;
- (void).cxx_destruct;
- (id)description;
- (void)setPersonaUniqueString:;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

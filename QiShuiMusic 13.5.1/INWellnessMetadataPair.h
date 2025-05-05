@interface INWellnessMetadataPair : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSNumber numberValue;
@property (nonatomic) NSString stringValue;
- (id)numberValue;
- (id)_dictionaryRepresentation;
- (id)key;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (id)stringValue;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithNumber:key:;
- (id)initWithString:key:;
+ (BOOL)supportsSecureCoding;
@end

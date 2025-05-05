@interface IDSPseudonym : NSObject
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) IDSURI URI;
@property (nonatomic) IDSURI maskedURI;
@property (nonatomic) IDSPseudonymProperties properties;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)URI;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)destinationURIs;
- (id)initWithDictionaryRepresentation:;
- (void)encodeWithCoder:;
- (id)properties;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToPseudonym:;
- (id)initWithURI:maskedURI:properties:;
- (id)withUpdatedProperties:;
- (id)maskedURI;
+ (BOOL)supportsSecureCoding;
@end

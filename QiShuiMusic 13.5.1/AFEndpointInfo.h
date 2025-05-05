@interface AFEndpointInfo : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString mediaRouteIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mediaRouteIdentifier;
- (id)init;
- (id)buildDictionaryRepresentation;
- (id)identifier;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIdentifier:mediaRouteIdentifier:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end

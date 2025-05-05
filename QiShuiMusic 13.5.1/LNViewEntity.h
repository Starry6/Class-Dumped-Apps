@interface LNViewEntity : NSObject
@property (nonatomic) LNEntityIdentifier identifier;
@property (nonatomic) {LNViewLocation=dddddd} location;
@property (nonatomic) NSNumber interactionId;
@property (nonatomic) q structuredDataRepresentations;
- (id)identifier;
- (id)initWithCoder:;
- (id)location;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)interactionId;
- (id)initWithIdentifier:interactionId:location:;
- (id)initWithIdentifier:interactionId:location:structuredDataRepresentations:;
- (long long)structuredDataRepresentations;
+ (BOOL)supportsSecureCoding;
@end

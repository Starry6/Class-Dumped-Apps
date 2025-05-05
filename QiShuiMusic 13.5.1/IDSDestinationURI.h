@interface IDSDestinationURI : IDSDestination
@property (nonatomic) IDSURI uri;
- (id)uri;
- (id)initWithURI:;
- (id)initWithURIString:;
- (id)initWithCoder:;
- (id)destinationURIs;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)destinationLightweightStatus;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

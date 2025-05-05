@interface IDSDestinationGroupSessionMember : IDSDestination
@property (nonatomic) NSString uri;
@property (nonatomic) IDSURI URIObject;
@property (nonatomic) BOOL isLightWeight;
- (id)uri;
- (id)initWithURI:;
- (id)URIObject;
- (id)initWithURIObject:isLightWeight:;
- (BOOL)isDevice;
- (id)initWithURI:isLightWeight:;
- (id)initWithCoder:;
- (id)destinationURIs;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isLightWeight;
- (id)description;
- (id)destinationLightweightStatus;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

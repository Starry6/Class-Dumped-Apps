@interface IDSDestinationDevice : IDSDestination
@property (nonatomic) IDSURI destinationURI;
@property (nonatomic) BOOL isGuest;
- (BOOL)isGuest;
- (id)destinationURI;
- (BOOL)isDevice;
- (void)setDestinationURI:;
- (id)initWithDeviceURI:;
- (id)initWithCoder:;
- (id)destinationURIs;
- (void)encodeWithCoder:;
- (id)initWithRapportPublicIdentifierURI:;
- (void).cxx_destruct;
- (id)initWithURI:isGuest:;
- (id)initWithIDSDeviceURI:;
- (id)description;
- (void)setIsGuest:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isDeviceURI:;
@end

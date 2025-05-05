@interface IDSDestinationComposite : IDSDestination
@property (nonatomic) NSArray destinations;
- (id)destinations;
- (id)initWithDestinations:;
- (id)initWithCoder:;
- (id)destinationURIs;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)destinationLightweightStatus;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

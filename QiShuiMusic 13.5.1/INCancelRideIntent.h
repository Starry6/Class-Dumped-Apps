@interface INCancelRideIntent : INIntent
@property (nonatomic) NSString rideIdentifier;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)rideIdentifier;
- (id)initWithRideIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;
@end

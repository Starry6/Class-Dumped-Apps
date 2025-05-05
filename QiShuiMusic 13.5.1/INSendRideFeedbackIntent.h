@interface INSendRideFeedbackIntent : INIntent
@property (nonatomic) NSString rideIdentifier;
@property (nonatomic) NSNumber rating;
@property (nonatomic) INCurrencyAmount tip;
- (id)rating;
- (id)_dictionaryRepresentation;
- (id)tip;
- (void)setTip:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setRating:;
- (id)rideIdentifier;
- (id)initWithRideIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;
@end

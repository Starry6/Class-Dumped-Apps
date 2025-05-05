@interface ICRadioTrackInfoContentReference : ICRadioStoreContentReference
@property (nonatomic) NSDictionary trackInfo;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)rawContentDictionaryWithSubscriptionStatus:;
- (id)trackInfo;
- (id)initWithStoreIdentifier:trackInfo:;
+ (BOOL)supportsSecureCoding;
@end

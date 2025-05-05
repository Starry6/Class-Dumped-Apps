@interface ICRadioPlaybackHistory : NSObject
@property (nonatomic) NSString stationIdentifier;
@property (nonatomic) q numberOfSkips;
@property (nonatomic) NSArray tracks;
@property (nonatomic) ICRadioPlaybackHistoryItem currentTrack;
@property (nonatomic) NSDictionary propertyListRepresentation;
- (id)tracks;
- (id)propertyListRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)stationIdentifier;
- (id)initWithStationIdentifier:;
- (long long)numberOfSkips;
- (id)currentTrack;
+ (BOOL)supportsSecureCoding;
@end

@interface ICRadioGetTracksResponse : ICRadioResponse
@property (nonatomic) ICRadioStationMetadata stationMetadata;
@property (nonatomic) q tracklistActionType;
@property (nonatomic) NSArray tracks;
@property (nonatomic) NSDate assetExpirationDate;
- (id)tracks;
- (void).cxx_destruct;
- (id)initWithResponseDictionary:expirationDate:;
- (id)assetExpirationDate;
- (id)stationMetadata;
- (long long)tracklistActionType;
@end

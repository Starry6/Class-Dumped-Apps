@interface SAMPCreateRadioStation : SABaseClientBoundCommand
@property (nonatomic) NSString assetInfo;
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) NSNumber startPlaying;
@property (nonatomic) NSURL stationUrl;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (id)assetInfo;
- (void)setAssetInfo:;
- (id)startPlaying;
- (void)setStartPlaying:;
- (id)stationUrl;
- (void)setStationUrl:;
+ (id)createRadioStation;
+ (id)createRadioStationWithDictionary:context:;
@end

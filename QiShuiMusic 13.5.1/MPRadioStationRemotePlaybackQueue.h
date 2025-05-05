@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue
@property (nonatomic) q stationID;
@property (nonatomic) NSString stationStringID;
- (void).cxx_destruct;
- (id)description;
- (BOOL)verifyWithError:;
- (long long)stationID;
- (id)stationStringID;
- (id)initWithMediaRemotePlaybackQueue:options:;
+ (BOOL)supportsSecureCoding;
@end

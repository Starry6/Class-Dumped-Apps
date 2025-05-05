@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent
@property (nonatomic) NSURL stationURL;
@property (nonatomic) BOOL requestingPlaybackInitialization;
@property (nonatomic) NSNumber privateListeningOverride;
- (void).cxx_destruct;
- (id)stationURL;
- (id)initWithCommand:mediaRemoteType:options:;
- (BOOL)isRequestingPlaybackInitialization;
- (id)privateListeningOverride;
@end

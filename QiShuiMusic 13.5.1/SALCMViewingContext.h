@interface SALCMViewingContext : SADomainObject
@property (nonatomic) BOOL commercialPlaying;
@property (nonatomic) NSNumber durationInMilliseconds;
@property (nonatomic) SALCMContent nowPlaying;
@property (nonatomic) NSString nowPlayingAppId;
@property (nonatomic) BOOL paused;
@property (nonatomic) NSNumber playbackPositionInMilliseconds;
@property (nonatomic) NSArray viewingHistory;
- (BOOL)paused;
- (void)setNowPlaying:;
- (id)groupIdentifier;
- (id)nowPlaying;
- (void)setPaused:;
- (id)encodedClassName;
- (id)durationInMilliseconds;
- (void)setDurationInMilliseconds:;
- (BOOL)commercialPlaying;
- (void)setCommercialPlaying:;
- (id)nowPlayingAppId;
- (void)setNowPlayingAppId:;
- (id)playbackPositionInMilliseconds;
- (void)setPlaybackPositionInMilliseconds:;
- (id)viewingHistory;
- (void)setViewingHistory:;
+ (id)viewingContext;
+ (id)viewingContextWithDictionary:context:;
@end

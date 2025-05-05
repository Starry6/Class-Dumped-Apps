@interface MPNowPlayingSessionManager : NSObject
@property (nonatomic) NSMutableDictionary sessions;
@property (nonatomic) <MPNowPlayingSessionManagerDataSource> dataSource;
- (void)setDataSource:;
- (void)setSessions:;
- (id)sessions;
- (id)dataSource;
- (void).cxx_destruct;
- (id)_init;
- (void)getActiveNowPlayingSessionForDeviceUID:completion:;
- (id)_sessionForPlayerPath:;
- (id)_generateAudioSessionForRoutingContextUID:;
+ (id)sharedManager;
@end

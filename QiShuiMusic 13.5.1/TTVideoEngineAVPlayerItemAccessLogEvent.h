@interface TTVideoEngineAVPlayerItemAccessLogEvent : NSObject
@property (nonatomic) NSString URI;
@property (nonatomic) NSString serverAddress;
@property (nonatomic) double durationWatched;
- (void)setDurationWatched:;
- (id)URI;
- (void)setURI:;
- (void).cxx_destruct;
- (id)serverAddress;
- (double)durationWatched;
- (void)setServerAddress:;
@end

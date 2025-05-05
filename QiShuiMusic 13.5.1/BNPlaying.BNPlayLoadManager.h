@interface BNPlaying.BNPlayLoadManager : NSObject
- (id)localServerGetStringBykey:code:type:;
- (void)localServerLogUpdate:;
- (void)localServerTaskProgress:;
- (void)localServerTestSpeedInfo:size:;
- (void)mediaLoaderLoadProgress:;
- (void)preloaderErrorForVid:errorType:error:;
- (id)init;
- (void).cxx_destruct;
@end

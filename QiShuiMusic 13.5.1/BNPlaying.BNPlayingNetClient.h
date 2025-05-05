@interface BNPlaying.BNPlayingNetClient : NSObject
- (void)configTaskWithURL:completion:;
- (void)configTaskWithURL:params:headers:completion:;
- (void)invalidAndCancel;
- (id)init;
- (void)cancel;
- (void)resume;
- (void).cxx_destruct;
@end

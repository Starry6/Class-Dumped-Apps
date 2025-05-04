@interface AWEMCEditViewPlayer : NSObject
@property (nonatomic) NLEInterface_OC session;
- (void)addNLEMainVideoTrackToNLEModel:withRecorderAssets:;
- (void)setVideoData:preview:;
- (void)dealloc;
- (void)setSession:;
- (id)session;
- (void).cxx_destruct;
- (void)start;
- (void)pause;
@end

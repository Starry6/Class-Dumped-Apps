@interface AWEListenFeedModel : AWEBaseApiModel
@property (nonatomic) q videoSleepStatus;
@property (nonatomic) q musicCoverListen;
@property (nonatomic) NSString traceInfo;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (long long)videoSleepStatus;
- (long long)musicCoverListen;
- (id)traceInfo;
- (void)setVideoSleepStatus:;
- (void)setMusicCoverListen:;
- (void)setTraceInfo:;
- (id)extra;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

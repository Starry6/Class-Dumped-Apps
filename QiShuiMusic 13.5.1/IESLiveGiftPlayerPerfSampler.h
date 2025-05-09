@interface IESLiveGiftPlayerPerfSampler : NSObject
@property (nonatomic) NSMutableDictionary baseParams;
@property (nonatomic) q deviceFps;
@property (nonatomic) @? fpsCallback;
@property (nonatomic) double initTime;
@property (nonatomic) q captureTimes;
@property (nonatomic) NSMutableArray timingNodes;
@property (nonatomic) BOOL playing;
- (id)paramsForReport;
- (void)setFpsCallback:;
- (void)setTimingNodes:;
- (id)baseParams;
- (long long)captureTimes;
- (long long)deviceFps;
- (void)didFinishPlayWithExtraParams:;
- (void)didSetAttachingDIContext;
- (id)fpsCallback;
- (id)initWithRoomID:isAnchor:;
- (id)pr_commonParamsForDeviceState;
- (void)setBaseParams:;
- (void)setCaptureTimes:;
- (void)setDeviceFps:;
- (id)timingNodes;
- (void)willPlayFrame:currentTime:extraParams:;
- (void)willStartPlayWithNode:totalDuration:;
- (BOOL)isPlaying;
- (void)dealloc;
- (void)setPlaying:;
- (void).cxx_destruct;
- (double)initTime;
- (void)setInitTime:;
@end

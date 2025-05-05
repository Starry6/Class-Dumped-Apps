@interface AWEIMDoubleTrackerManager : NSObject
@property (nonatomic) NSArray doubleTrack;
@property (nonatomic) NSArray applogTrack;
@property (nonatomic) NSArray monitorTrack;
- (void)doubleTrackEvent:status:params:;
- (void)setApplogTrack:;
- (void)setDoubleTrack:;
- (id)applogTrack;
- (void)applogTrackEvent:params:;
- (id)doubleTrack;
- (id)monitorTrack;
- (void)monitorTrackService:status:params:;
- (BOOL)needUploadByCustomSampling:;
- (void)p_trackEvent:status:params:type:;
- (void)setMonitorTrack:;
- (void).cxx_destruct;
+ (id)applogSampling;
+ (long long)applogSamplingBase;
+ (BOOL)enableApplogSampling;
+ (id)sharedInstance;
@end

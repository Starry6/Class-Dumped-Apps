@interface AWETeenFeedQualityOldMonitor : NSObject
@property (nonatomic) double startAutoPlayTime;
@property (nonatomic) q vcType;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) BOOL isReady;
- (long long)vcType;
- (void)setVcType:;
- (void)p_trackCancelQuality;
- (void)p_trackCancelByPause;
- (void)p_trackFinishQualityFirstPlay:;
- (void)p_startAutoPlayQuality;
- (double)startAutoPlayTime;
- (void)setStartAutoPlayTime:;
- (void)oldTrackColdLaunchFirstFrame:;
- (id)p_qualityIdentifier;
- (void)setModel:;
- (BOOL)isReady;
- (id)model;
- (void).cxx_destruct;
- (void)setIsReady:;
+ (id)sharedInstanced;
@end

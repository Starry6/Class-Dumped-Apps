@interface VCPSettlingEffectAnalyzer : VCPVideoAnalyzer
@property (nonatomic) BOOL processAborted;
@property (nonatomic) BOOL cancelled;
- (BOOL)cancelled;
- (void)setCancelled:;
- (void)dealloc;
- (id)results;
- (void).cxx_destruct;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (id)initWithTimestamps:andTrack:;
- (id)findLivePhotoInfoOutput:;
- (int)setupLivePhotoInfoOutput:;
- (int)createLivePhotoInfoSample:withTimestamp:isInterpolated:updatedSample:;
- (int)finishAnalysisPass:withStillImageBuffer:;
- (id)getFramePTSList:before:;
- (id)getFrameSize:;
- (id)getRetimingCurve;
- (BOOL)processAborted;
+ (long long)getFRCQualityMode;
@end

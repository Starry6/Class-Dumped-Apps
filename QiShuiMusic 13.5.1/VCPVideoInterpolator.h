@interface VCPVideoInterpolator : VCPVideoAnalyzer
@property (nonatomic) BOOL processAborted;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} adjustedTimeRange;
@property (nonatomic) BOOL cancelled;
- (BOOL)cancelled;
- (void)setCancelled:;
- (void)dealloc;
- (id)results;
- (void).cxx_destruct;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)finishAnalysisPass:;
- (id)findLivePhotoInfoOutput:;
- (int)setupLivePhotoInfoOutput:;
- (id)getFrameSize:;
- (BOOL)processAborted;
- (id)initWithTimestamps:andIdentifier:andTrack:;
- (int)findIntraFrameList:;
- (BOOL)isIntraFrame:;
- (id)deserializeMetadata:;
- (int)updateLivePhotoInfoSample:withTimestamp:withMetadata:isInterpolated:updatedSample:;
- (int)combineVideoSegments;
- (int)appendOutput:toTrack:startTimeStamp:endTimeStamp:offset:duration:;
- (id)adjustedTimeRange;
+ (BOOL)isEnabled;
+ (long long)getFRCQualityMode;
+ (BOOL)allowMultipleFormats;
+ (void)sendPreGatedAnalytics;
@end

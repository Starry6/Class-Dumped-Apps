@interface IESLivePlayerCrossTalkDetectManager : NSObject
@property (nonatomic) NSMutableArray detectedLivePlayerHashArray;
@property (nonatomic) NSMutableArray detectedVideoPlayerHashArray;
- (void)setDetectedLivePlayerHashArray:;
- (void)analyzeCrossTalkOriginInfo:trackBlock:;
- (BOOL)checkHasReportPlayerWithEnginHashID:isLive:;
- (id)detectedLivePlayerHashArray;
- (id)detectedVideoPlayerHashArray;
- (void)doAnalyzeCrossTalkOriginInfo:trackBlock:;
- (void)setDetectedVideoPlayerHashArray:;
- (void)triggerALogReport;
- (void).cxx_destruct;
@end

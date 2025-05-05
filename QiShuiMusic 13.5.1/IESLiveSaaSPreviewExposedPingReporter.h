@interface IESLiveSaaSPreviewExposedPingReporter : NSObject
@property (nonatomic) q duration;
@property (nonatomic) IESLiveSaaSGCDTimer timer;
@property (nonatomic) NSNumber roomID;
- (void)endReportPreStreamBrowseTime;
- (void)reportPerStreamBrowseTimeWithType:;
- (void)reportPreStreamExpose;
- (void)startReportPreStreamBrowseTime;
- (void)streamPlayerStartPlay;
- (void)updateRoomID:;
- (id)init;
- (void)setDuration:;
- (void)setTimer:;
- (void).cxx_destruct;
- (void)reset;
- (id)timer;
- (long long)duration;
- (id)roomID;
- (void)setRoomID:;
- (void)viewDidDisappear;
@end

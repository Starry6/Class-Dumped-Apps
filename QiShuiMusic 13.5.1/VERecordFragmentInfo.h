@interface VERecordFragmentInfo : NSObject
@property (nonatomic) double rate;
@property (nonatomic) BOOL videoRecorded;
@property (nonatomic) double videoStartTime;
@property (nonatomic) double maxAccelerate;
@property (nonatomic) BOOL cameraPosition;
@property (nonatomic) double delayTime;
- (double)maxAccelerate;
- (void)setMaxAccelerate:;
- (void)setVideoRecorded:;
- (void)setVideoStartTime:;
- (BOOL)videoRecorded;
- (double)videoStartTime;
- (void)setRate:;
- (double)rate;
- (BOOL)cameraPosition;
- (void)setDelayTime:;
- (double)delayTime;
- (void)setCameraPosition:;
@end

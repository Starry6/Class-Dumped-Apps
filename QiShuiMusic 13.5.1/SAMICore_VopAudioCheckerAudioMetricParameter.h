@interface SAMICore_VopAudioCheckerAudioMetricParameter : NSObject
@property (nonatomic) BOOL enableSNR;
@property (nonatomic) float snrThreshold;
@property (nonatomic) float cutoffLength;
@property (nonatomic) NSString audioMetricModelPath;
- (id)audioMetricModelPath;
- (float)cutoffLength;
- (BOOL)enableSNR;
- (void)setAudioMetricModelPath:;
- (void)setCutoffLength:;
- (void)setEnableSNR:;
- (void)setSnrThreshold:;
- (float)snrThreshold;
- (void)dealloc;
@end

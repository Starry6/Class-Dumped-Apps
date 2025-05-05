@interface IESLiveInteractAudioReportCalculator : NSObject
@property (nonatomic) Q threshold;
- (BOOL)speakStateWithVolume:;
- (void)updateWithVolume:;
- (unsigned long long)threshold;
- (id)init;
- (void)setThreshold:;
@end

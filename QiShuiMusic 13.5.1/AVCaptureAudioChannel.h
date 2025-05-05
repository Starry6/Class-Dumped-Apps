@interface AVCaptureAudioChannel : NSObject
@property (nonatomic) float averagePowerLevel;
@property (nonatomic) float peakHoldLevel;
@property (nonatomic) float volume;
@property (nonatomic) BOOL enabled;
- (float)volume;
- (void)dealloc;
- (void)setVolume:;
- (float)averagePowerLevel;
- (void)setEnabled:;
- (float)peakHoldLevel;
- (id)initWithConnection:;
- (void)invalidate;
- (BOOL)isEnabled;
@end

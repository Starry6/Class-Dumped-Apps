@interface AVCaptureSystemPressureState : NSObject
@property (nonatomic) NSString level;
@property (nonatomic) Q factors;
- (id)init;
- (id)initWithFigLevel:factors:recommendedFrameRateRangeForPortrait:;
- (void)dealloc;
- (id)level;
- (id)spiDebugDescription;
- (int)figLevel;
- (id)debugDescription;
- (id)recommendedFrameRateRangeForPortrait;
- (unsigned long long)factors;
- (id)description;
- (BOOL)isEqual:;
@end

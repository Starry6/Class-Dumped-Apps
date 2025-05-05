@interface AVCaptureSystemPressureStateInternal : NSObject
@property (nonatomic) NSInteger figLevel;
@property (nonatomic) Q factors;
@property (nonatomic) AVFrameRateRange recommendedFrameRateRangeForPortrait;
- (id)initWithFigLevel:factors:recommendedFrameRateRangeForPortrait:;
- (void)dealloc;
- (int)figLevel;
- (id)recommendedFrameRateRangeForPortrait;
- (unsigned long long)factors;
@end

@interface WK_RTCVideoEncoderQpThresholds : NSObject
@property (nonatomic) q low;
@property (nonatomic) q high;
- (long long)high;
- (long long)low;
- (id)initWithThresholdsLow:high:;
@end

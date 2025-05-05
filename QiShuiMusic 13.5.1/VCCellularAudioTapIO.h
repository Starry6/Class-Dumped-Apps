@interface VCCellularAudioTapIO : NSObject
@property (nonatomic) VCAudioIO audioIO;
@property (nonatomic) q streamToken;
@property (nonatomic) VCAudioPowerSpectrumSource powerSpectrumSource;
@property (nonatomic) ^{tagVCCellularAudioTapIORealtimeContext=q^{_VCAudioPowerSpectrumSourceRealtimeContext}} realtimeContext;
- (void)dealloc;
- (long long)streamToken;
- (id)realtimeContext;
- (id)audioIO;
- (void)setAudioIO:;
- (id)initWithStreamToken:powerSpectrumSource:;
- (id)powerSpectrumSource;
@end

@interface TUAudioFrequencyController : NSObject
@property (nonatomic) <TUAudioFrequencyControllerDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) AVCAudioPowerSpectrumMeter powerSpectrumMeter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDelegate:queue:;
- (id)delegate;
- (void).cxx_destruct;
- (id)queue;
- (void)audioPowerSpectrumMeter:didUpdateAudioPowerSpectrums:;
- (void)meterServerDidDisconnect:;
- (void)registerParticipantPowerSpectrum:;
- (void)unregisterParticipantPowerSpectrum:;
- (void)registerCellularPowerSpectrum:;
- (void)unregisterCellularPowerSpectrum:;
- (unsigned int)_avcTapTypeForTUTapType:;
- (id)powerSpectrumMeter;
+ (float)normalizedPowerLevelForPowerSpectrum:;
+ (float)rawPowerLevelForPowerSpectrum:;
@end

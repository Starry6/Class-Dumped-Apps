@interface MPChangePlaybackRateCommand : MPRemoteCommand
@property (nonatomic) NSArray supportedPlaybackRates;
- (void)setPreferredRate:;
- (id)_mediaRemoteCommandInfoOptions;
- (float)preferredRate;
- (void)setSupportedPlaybackRates:;
- (id)supportedPlaybackRates;
- (void).cxx_destruct;
- (id)newCommandEventWithPlaybackRate:;
@end

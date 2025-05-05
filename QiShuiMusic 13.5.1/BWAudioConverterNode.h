@interface BWAudioConverterNode : BWNode
@property (nonatomic) NSDictionary gaplessPlaybackInfo;
- (id)init;
- (void)dealloc;
- (id)settings;
- (void)acquireHardware;
- (void)setSettings:;
- (id)gaplessPlaybackInfo;
- (id)nodeType;
- (void)relinquishHardware;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
@end

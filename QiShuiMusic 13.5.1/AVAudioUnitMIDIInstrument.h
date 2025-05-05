@interface AVAudioUnitMIDIInstrument : AVAudioUnit
@property (nonatomic) float volume;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAudioComponentDescription:;
- (void)startNote:withVelocity:onChannel:;
- (void)stopNote:onChannel:;
- (void)sendController:withValue:onChannel:;
- (void)sendPitchBend:onChannel:;
- (void)sendPressure:onChannel:;
- (void)sendPressureForKey:withValue:onChannel:;
- (void)sendProgramChange:onChannel:;
- (void)sendProgramChange:bankMSB:bankLSB:onChannel:;
- (void)sendMIDIEvent:data1:data2:;
- (void)sendMIDIEvent:data1:;
- (void)sendMIDISysExEvent:;
- (void)sendMIDIEventList:;
@end

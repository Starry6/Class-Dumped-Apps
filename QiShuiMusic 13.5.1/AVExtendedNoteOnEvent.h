@interface AVExtendedNoteOnEvent : AVMusicEvent
@property (nonatomic) ^{ExtendedNoteOnEvent=IIf{MusicDeviceNoteParams=Iff[1{NoteParamsControlValue=If}]}} event;
@property (nonatomic) float midiNote;
@property (nonatomic) float velocity;
@property (nonatomic) I instrumentID;
@property (nonatomic) I groupID;
@property (nonatomic) double duration;
- (float)velocity;
- (void)setGroupID:;
- (unsigned int)groupID;
- (void)setVelocity:;
- (void)dealloc;
- (id)event;
- (void)setDuration:;
- (double)duration;
- (id)initWithMIDINote:velocity:instrumentID:groupID:duration:;
- (id)initWithMIDINote:velocity:groupID:duration:;
- (float)midiNote;
- (void)setMidiNote:;
- (unsigned int)instrumentID;
- (void)setInstrumentID:;
- (id)initWithNoteOnEvent:;
@end

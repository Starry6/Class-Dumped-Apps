@interface AVMIDISysexEvent : AVMusicEvent
@property (nonatomic) ^{MIDIRawData=I[1C]} rawData;
@property (nonatomic) I sizeInBytes;
- (unsigned int)sizeInBytes;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)rawData;
- (id)initWithMIDIRawData:;
@end

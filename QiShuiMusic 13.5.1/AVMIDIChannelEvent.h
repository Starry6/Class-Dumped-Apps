@interface AVMIDIChannelEvent : AVMusicEvent
@property (nonatomic) ^{MIDIChannelMessage=CCCC} message;
@property (nonatomic) I channel;
- (void)setChannel:;
- (unsigned int)channel;
- (id)initWithMessage:;
- (BOOL)isEqualTo:;
- (id)message;
- (id)initWithChannel:status:data1:data2:;
- (unsigned char)data1;
- (void)setData1:;
- (unsigned char)data2;
- (void)setData2:;
@end

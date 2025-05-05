@interface AVMIDIPitchBendEvent : AVMIDIChannelEvent
@property (nonatomic) I value;
- (id)initWithMessage:;
- (void)setValue:;
- (unsigned int)value;
- (id)initWithChannel:value:;
@end

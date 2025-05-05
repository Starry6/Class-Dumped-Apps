@interface AVMIDIChannelPressureEvent : AVMIDIChannelEvent
@property (nonatomic) I pressure;
- (unsigned int)pressure;
- (void)setPressure:;
- (id)initWithMessage:;
- (id)initWithChannel:pressure:;
@end

@interface AVMIDIPolyPressureEvent : AVMIDIChannelEvent
@property (nonatomic) I key;
@property (nonatomic) I pressure;
- (unsigned int)pressure;
- (void)setPressure:;
- (unsigned int)key;
- (id)initWithMessage:;
- (void)setKey:;
- (id)initWithChannel:key:pressure:;
@end

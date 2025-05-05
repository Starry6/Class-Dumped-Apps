@interface AVMIDIControlChangeEvent : AVMIDIChannelEvent
@property (nonatomic) q messageType;
@property (nonatomic) I value;
- (long long)messageType;
- (id)initWithMessage:;
- (unsigned int)value;
- (id)initWithChannel:messageType:value:;
@end

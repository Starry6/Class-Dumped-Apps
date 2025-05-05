@interface AVMIDIProgramChangeEvent : AVMIDIChannelEvent
@property (nonatomic) I programNumber;
- (id)initWithMessage:;
- (id)initWithChannel:programNumber:;
- (unsigned int)programNumber;
- (void)setProgramNumber:;
@end

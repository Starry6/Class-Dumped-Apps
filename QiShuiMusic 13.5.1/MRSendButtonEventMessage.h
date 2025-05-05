@interface MRSendButtonEventMessage : MRProtocolMessage
@property (nonatomic) {_MRHIDButtonEvent=IIB} buttonEvent;
- (unsigned long long)type;
- (id)buttonEvent;
- (id)initWithButtonEvent:;
@end

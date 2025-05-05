@interface MRLegacySendHIDEventMessage : MRProtocolMessage
@property (nonatomic) {_MRHIDButtonEvent=IIB} buttonEvent;
- (void)dealloc;
- (unsigned long long)type;
- (id)buttonEvent;
- (id)description;
- (id)initWithHIDEvent:;
@end

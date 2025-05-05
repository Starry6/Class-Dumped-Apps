@interface MRRegisterForGameControllerEventsMessage : MRProtocolMessage
@property (nonatomic) I inputMode;
- (unsigned int)inputMode;
- (unsigned long long)type;
- (id)initWithInputMode:;
@end

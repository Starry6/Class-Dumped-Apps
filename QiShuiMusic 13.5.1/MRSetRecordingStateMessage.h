@interface MRSetRecordingStateMessage : MRProtocolMessage
@property (nonatomic) I state;
- (unsigned long long)type;
- (unsigned int)state;
- (id)initWithRecordingState:;
@end

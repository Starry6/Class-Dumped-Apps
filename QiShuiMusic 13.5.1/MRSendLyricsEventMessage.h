@interface MRSendLyricsEventMessage : MRProtocolMessage
@property (nonatomic) _MRLyricsEventProtobuf event;
- (id)event;
- (unsigned long long)type;
- (id)initWithEvent:;
@end

@interface MRSetStateMessage : MRProtocolMessage
@property (nonatomic) MRNowPlayingState state;
- (unsigned long long)type;
- (id)state;
- (void).cxx_destruct;
- (id)initWithUnderlyingCodableMessage:error:;
- (id)initWithNowPlayingState:;
@end

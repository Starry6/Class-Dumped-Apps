@interface MRCompositeMessage : MRProtocolMessage
@property (nonatomic) NSArray messages;
- (id)init;
- (id)messages;
- (void)setTransportOptions:;
- (void).cxx_destruct;
- (id)description;
- (id)transportOptions;
- (void)addMessage:;
@end

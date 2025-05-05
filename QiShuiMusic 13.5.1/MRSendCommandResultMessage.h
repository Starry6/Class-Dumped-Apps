@interface MRSendCommandResultMessage : MRProtocolMessage
@property (nonatomic) MRCommandResult commandResult;
- (unsigned long long)type;
- (void).cxx_destruct;
- (unsigned int)sendError;
- (id)commandResult;
- (id)initWithCommandID:commandResult:;
@end

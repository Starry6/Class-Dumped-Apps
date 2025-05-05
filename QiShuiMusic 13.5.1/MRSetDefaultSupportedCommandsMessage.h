@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage
@property (nonatomic) NSArray supportedCommands;
@property (nonatomic) NSString bundleID;
- (id)supportedCommands;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithUnderlyingCodableMessage:error:;
- (id)bundleID;
- (id)initWithDefaultSupportedCommands:forPlayerPath:;
@end

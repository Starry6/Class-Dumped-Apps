@interface MRSendCommandMessage : MRProtocolMessage
@property (nonatomic) I command;
@property (nonatomic) NSDictionary options;
@property (nonatomic) NSDate serializationDate;
@property (nonatomic) MRPlayerPath playerPath;
@property (nonatomic) I appOptions;
- (unsigned int)command;
- (id)options;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)playerPath;
- (unsigned int)appOptions;
- (id)initWithCommand:options:playerPath:;
- (id)serializationDate;
@end

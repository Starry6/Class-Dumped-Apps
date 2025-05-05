@interface AFInterstitialCommandWrapper : NSObject
@property (nonatomic) AceObject<SAAceCommand> command;
@property (nonatomic) AceObject<SAAceCommand> defaultReply;
- (void)dealloc;
- (id)command;
- (void).cxx_destruct;
- (id)initWithCommand:defaultReply:completion:;
- (void)dispatchCompletionWithReply:error:;
- (id)defaultReply;
@end

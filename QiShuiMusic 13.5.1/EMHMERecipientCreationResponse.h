@interface EMHMERecipientCreationResponse : AAResponse
@property (nonatomic) NSString replyToAddress;
- (id)initWithHTTPResponse:data:;
- (void).cxx_destruct;
- (id)replyToAddress;
- (void)setReplyToAddress:;
+ (id)log;
@end

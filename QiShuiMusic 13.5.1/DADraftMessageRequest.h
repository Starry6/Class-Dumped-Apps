@interface DADraftMessageRequest : DAMailboxRequest
@property (nonatomic) DAMailMessage message;
@property (nonatomic) BOOL send;
- (void)setMessage:;
- (BOOL)send;
- (id)message;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestType:message:send:;
- (void)setSend:;
@end

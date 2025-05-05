@interface MFDADraftMessage : DAMailMessage
- (id)subject;
- (id)body;
- (void)setClientID:;
- (id)date;
- (void).cxx_destruct;
- (id)clientID;
- (id)from;
- (id)to;
- (id)cc;
- (id)bcc;
- (id)replyTo;
- (id)serverID;
- (id)messageIDHeader;
- (id)initWithMailMessage:clientID:;
- (int)bodyType;
@end

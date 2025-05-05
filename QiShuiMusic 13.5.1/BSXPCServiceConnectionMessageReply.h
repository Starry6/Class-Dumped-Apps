@interface BSXPCServiceConnectionMessageReply : BSXPCServiceConnectionMessage
- (BOOL)sendSynchronously;
- (id)initWithMessage:;
@end

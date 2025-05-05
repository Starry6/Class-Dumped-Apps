@interface ICADIProvisionSession : NSObject
- (void)dealloc;
- (id)initWithAccountID:;
- (BOOL)startWithServerActionData:returningClientData:error:;
- (BOOL)endWithMessageData:transportKey:error:;
- (void)_destroySession;
@end

@interface CSLifeFSConnection : CSXPCConnection
- (void)sendMessageAsync:completion:;
- (void)handleError:;
+ (id)sharedConnection;
@end

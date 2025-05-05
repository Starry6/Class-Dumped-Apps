@interface CSPrivateIndexConnection : CSIndexConnection
- (void)sendMessageAsync:completion:;
+ (id)privateIndexConnectionForToken:;
+ (void)removePrivateIndexConnectionForToken:;
@end

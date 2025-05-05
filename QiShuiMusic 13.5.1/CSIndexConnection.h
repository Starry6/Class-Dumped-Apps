@interface CSIndexConnection : CSXPCConnection
@property (nonatomic) BOOL previouslyInitialized;
- (void)sendMessageAsync:completion:;
- (void)handleError:;
- (BOOL)previouslyInitialized;
+ (id)sharedConnectionForUser:;
@end

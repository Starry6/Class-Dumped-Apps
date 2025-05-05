@interface RTIInputSystemUIClient : RTIInputSystemClient
- (id)initWithUIHostMachName:;
- (BOOL)_canResumeConnection;
- (void)_initializeConnectionWithMachName:;
@end

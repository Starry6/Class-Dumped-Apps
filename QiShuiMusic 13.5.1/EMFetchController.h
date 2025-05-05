@interface EMFetchController : NSObject
@property (nonatomic) EMRemoteConnection connection;
- (id)initWithRemoteConnection:;
- (id)diagnosticInformation;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)performFetchOfType:;
- (void)setSuppressedContexts:;
- (void)performFetchOfType:mailboxes:;
- (void)performFetchOfType:accounts:;
+ (id)remoteInterface;
@end

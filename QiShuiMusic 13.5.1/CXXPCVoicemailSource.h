@interface CXXPCVoicemailSource : CXVoicemailSource
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSString applicationIdentifier;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSURL bundleURL;
@property (nonatomic) NSSet capabilities;
- (id)applicationIdentifier;
- (void)setCapabilities:;
- (id)init;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)bundleURL;
- (id)vendorProtocolDelegate;
- (id)capabilities;
- (void)setApplicationIdentifier:;
- (void)setBundleURL:;
- (id)identifier;
- (void)setBundleIdentifier:;
- (int)processIdentifier;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)connection;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (void)setConnection:;
- (id)initWithConnection:;
@end

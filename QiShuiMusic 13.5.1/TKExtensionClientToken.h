@interface TKExtensionClientToken : TKClientToken
@property (nonatomic) NSXPCConnection serverConnection;
@property (nonatomic) NSXPCConnection tokenConnection;
- (id)serverConnection;
- (void)dealloc;
- (BOOL)ensureConnectionWithError:;
- (id)tokenConnection;
- (id)watcherEndpoint;
- (id)withError:invoke:;
- (id)SEPKeyEndpoint;
- (void).cxx_destruct;
- (id)endpoint;
- (id)initWithTokenID:serverEndpoint:targetUID:;
- (id)configurationEndpoint;
+ (id)builtinTokenIDs;
@end

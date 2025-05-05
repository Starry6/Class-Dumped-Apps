@interface CXXPCChannelSource : CXChannelSource
@property (nonatomic) CXChannelServiceClient client;
- (id)initWithClient:;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)vendorProtocolDelegate;
- (id)localizedName;
- (void)setClient:;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (id)auditToken;
- (int)processIdentifier;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)client;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (BOOL)isPermittedToUsePublicAPI;
@end

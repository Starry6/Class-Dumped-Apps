@interface ECNWConnectionWrapper : NSObject
@property (nonatomic) @? bytesAvailableHandler;
@property (nonatomic) NSError error;
@property (nonatomic) I timeout;
@property (nonatomic) BOOL allowsTrustPrompt;
@property (nonatomic) BOOL usesOpportunisticSockets;
@property (nonatomic) BOOL disableEphemeralDiffieHellmanCiphers;
@property (nonatomic) NSArray clientCertificates;
@property (nonatomic) NSString sourceApplicationBundleIdentifier;
@property (nonatomic) NSString accountIdentifier;
@property (nonatomic) NSString networkAccountIdentifier;
@property (nonatomic) NSString connectionServiceType;
@property (nonatomic) BOOL isNonAppInitiated;
@property (nonatomic) NSArray serverCertificates;
@property (nonatomic) NSString service;
@property (nonatomic) NSString remoteHostname;
@property (nonatomic) I remotePortNumber;
@property (nonatomic) BOOL isReadable;
@property (nonatomic) BOOL isWritable;
@property (nonatomic) BOOL isCellularConnection;
@property (nonatomic) BOOL isConstrained;
@property (nonatomic) BOOL isValid;
@property (nonatomic) @? networkActivityChangeBlock;
@property (nonatomic) @? serverTrustHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isConstrained;
- (void)enableThroughputMonitoring:;
- (id)init;
- (id)serverCertificates;
- (void)cancel;
- (void)_scheduleNextRead;
- (void)dealloc;
- (BOOL)connectToHost:withPort:service:;
- (void)setAccountIdentifier:;
- (void)_closeWithError:;
- (void)setNetworkAccountIdentifier:;
- (id)accountIdentifier;
- (void)setServerTrustHandler:;
- (id)networkActivityChangeBlock;
- (BOOL)_connectToEndpoint:service:;
- (void)setError:;
- (void)setIsNonAppInitiated:;
- (id)_createConnectionWithEndpoint:error:;
- (void)_handleConnectionReady;
- (void)setSourceApplicationBundleIdentifier:;
- (void)setTimeout:;
- (void)setAllowsTrustPrompt:;
- (id)sourceApplicationBundleIdentifier;
- (BOOL)isCellularConnection;
- (id)error;
- (void)close;
- (void)setBytesAvailableHandler:;
- (BOOL)isWritable;
- (BOOL)isNonAppInitiated;
- (BOOL)setSecurityProtocol:;
- (id)service;
- (id)serverTrustHandler;
- (id)connectionServiceType;
- (unsigned int)remotePortNumber;
- (void)stopActivity;
- (BOOL)test_connectToUNIXSocket:service:;
- (id)securityProtocol;
- (id)networkAccountIdentifier;
- (id)_negotiatedSecurityProtocol;
- (id)remoteHostname;
- (void)_networkActivityStarted;
- (BOOL)disableEphemeralDiffieHellmanCiphers;
- (BOOL)isValid;
- (void)setDisableEphemeralDiffieHellmanCiphers:;
- (void)_closeWithErrorDomain:code:;
- (BOOL)usesOpportunisticSockets;
- (void).cxx_destruct;
- (void)setNetworkActivityChangeBlock:;
- (void)_configureTLS:;
- (void)setConnectionServiceType:;
- (BOOL)allowsTrustPrompt;
- (long long)readBytesIntoBuffer:maxLength:;
- (unsigned int)timeout;
- (id)description;
- (id)clientCertificates;
- (id)bytesAvailableHandler;
- (void)startActivity;
- (void)setUsesOpportunisticSockets:;
- (long long)writeBytes:length:;
- (BOOL)isReadable;
- (void)setClientCertificates:;
- (void)_handleConnectionFailure:;
- (void)_networkActivityEnded;
- (void)registerForBytesAvailableWithHandler:;
- (void)unregisterForBytesAvailable;
+ (id)log;
@end

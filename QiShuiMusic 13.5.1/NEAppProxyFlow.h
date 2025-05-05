@interface NEAppProxyFlow : NSObject
@property (nonatomic) BOOL isBound;
@property (nonatomic) NSData applicationData;
@property (nonatomic) NEFlowMetaData metaData;
@property (nonatomic) NSObject<OS_nw_interface> networkInterface;
@property (nonatomic) NSString remoteHostname;
- (void)dealloc;
- (unsigned long long)hash;
- (void)setMetadata:;
- (id)metaData;
- (id)remoteHostname;
- (void).cxx_destruct;
- (id)description;
- (id)applicationData;
- (void)setApplicationData:;
- (id)initWithNEFlow:queue:;
- (void)openWithLocalEndpoint:completionHandler:;
- (void)closeReadWithError:;
- (void)closeWriteWithError:;
- (id)networkInterface;
- (void)setNetworkInterface:;
- (BOOL)isBound;
- (void)setIsBound:;
@end

@interface OspreyMutableRequest : NSObject
@property (nonatomic) NSString methodName;
@property (nonatomic) NSString clientTraceIdentifier;
@property (nonatomic) BOOL enableDeviceAuthentication;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL compressionEnabled;
@property (nonatomic) BOOL forceHTTPv2;
@property (nonatomic) BOOL requireAbsintheAuthentication;
- (BOOL)allowsCellularAccess;
- (void)setAllowsCellularAccess:;
- (void)setValue:forHTTPHeaderField:;
- (void).cxx_destruct;
- (void)setClientTraceIdentifier:;
- (BOOL)isCompressionEnabled;
- (void)setCompressionEnabled:;
- (id)initWithMethodName:;
- (BOOL)requireAbsintheAuthentication;
- (void)setRequireAbsintheAuthentication:;
- (id)methodName;
- (BOOL)enableDeviceAuthentication;
- (void)setEnableDeviceAuthentication:;
- (BOOL)forceHTTPv2;
- (void)setForceHTTPv2:;
- (id)buildInternalRequest;
- (id)clientTraceIdentifier;
@end

@interface TKTokenAccessRequest : NSObject
@property (nonatomic) NSString clientBundleID;
@property (nonatomic) NSString clientName;
@property (nonatomic) BOOL clientHasAccessTokenEntitlement;
@property (nonatomic) TKTokenID tokenID;
@property (nonatomic) NSString providerBundleID;
@property (nonatomic) NSString providerName;
@property (nonatomic) NSUUID correlationID;
@property (nonatomic) NSXPCConnection clientConnection;
- (id)correlationID;
- (id)clientConnection;
- (id)clientName;
- (id)tokenID;
- (id)clientBundleID;
- (id)providerName;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithClientBundleID:clientName:clientConnection:clientHasAccessTokenEntitlement:tokenID:providerBundleID:providerName:correlationID:;
- (id)initWithCaller:tokenID:extension:;
- (BOOL)clientHasAccessTokenEntitlement;
- (id)providerBundleID;
@end

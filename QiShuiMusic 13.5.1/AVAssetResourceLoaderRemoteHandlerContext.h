@interface AVAssetResourceLoaderRemoteHandlerContext : NSObject
@property (nonatomic) NSObject<OS_xpc_object> endpoint;
@property (nonatomic) Q customURLHandlerObjectID;
@property (nonatomic) Q authHandlerObjectID;
@property (nonatomic) Q contentKeySessionHandlerObjectID;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)endpoint;
- (id)initWithEndpoint:customURLHandlerObjectID:authHandlerObjectID:contentKeySessionHandlerObjectID:;
- (unsigned long long)customURLHandlerObjectID;
- (unsigned long long)authHandlerObjectID;
- (unsigned long long)contentKeySessionHandlerObjectID;
+ (BOOL)supportsSecureCoding;
@end

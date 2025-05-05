@interface CPEndpointListenerWrapper : NSObject
@property (nonatomic) NSObject<OS_xpc_object> endpoint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (void)setEndpoint:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (id)endpoint;
- (id)initWithXPCEndpoint:;
@end

@interface LNConnectionActionResponse : NSObject
@property (nonatomic) NSXPCListenerEndpoint listenerEndpoint;
@property (nonatomic) {?=[8I]} auditToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (id)auditToken;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (id)listenerEndpoint;
- (id)initWithXPCListenerEndpoint:auditToken:;
+ (BOOL)supportsSecureCoding;
@end

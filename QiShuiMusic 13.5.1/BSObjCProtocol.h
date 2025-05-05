@interface BSObjCProtocol : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Protocol protocol;
@property (nonatomic) NSArray inheritedProtocols;
@property (nonatomic) NSArray methods;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)protocol;
- (id)methods;
- (id)init;
- (id)methodForSelector:;
- (id)succinctDescriptionBuilder;
- (id)inheritedProtocolForProtocol:;
- (id)flattenWithIgnoredInheritedProtocols:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)name;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)inheritedProtocols;
- (id)copyWithZone:;
+ (id)protocolForProtocol:;
+ (id)protocolForProtocol:interpreter:;
@end

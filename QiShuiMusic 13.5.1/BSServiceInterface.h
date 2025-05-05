@interface BSServiceInterface : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q clientMessagingExpectation;
@property (nonatomic) BSObjCProtocol server;
@property (nonatomic) BSObjCProtocol client;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)server;
- (id)identifier;
- (id)succinctDescriptionBuilder;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)client;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)mutableCopyWithZone:;
- (long long)clientMessagingExpectation;
- (id)descriptionBuilderWithMultilinePrefix:;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (id)interfaceWithServer:client:;
@end

@interface STStatusDomainXPCServerHandle : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)succinctDescriptionBuilder;
- (void)registerClient:forDomain:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)dataForDomain:;
- (id)initWithXPCConnectionProvider:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (void)reportUserInteraction:forClient:domain:;
- (void)removeClient:forDomain:;
- (id)descriptionWithMultilinePrefix:;
- (void)observeData:forDomain:withChangeContext:;
- (void)observeDiff:forDomain:withChangeContext:;
- (id)serverDataForDomains:;
+ (id)sharedMachServiceServerHandle;
@end

@interface STStatusDomainPublisherXPCServerHandle : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)publishVolatileData:forPublisherClient:domain:withChangeContext:completion:;
- (void)updateVolatileDataForPublisherClient:domain:usingDiffProvider:completion:;
- (id)publishedDataForDomain:;
- (id)init;
- (id)publishedVolatileDataForDomain:;
- (void)publishData:forPublisherClient:domain:withChangeContext:completion:;
- (id)succinctDescriptionBuilder;
- (void)handleUserInteraction:forDomain:;
- (void)updateDataForPublisherClient:domain:usingDiffProvider:completion:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (void)removePublisherClient:forDomain:;
- (id)initWithXPCConnectionProvider:;
- (void)registerPublisherClient:forDomain:fallbackData:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
+ (id)sharedMachServiceServerHandle;
@end

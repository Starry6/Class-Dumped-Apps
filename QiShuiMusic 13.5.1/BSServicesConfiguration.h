@interface BSServicesConfiguration : NSObject
@property (nonatomic) NSSet domains;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)succinctDescriptionBuilder;
- (id)domainForIdentifier:;
- (id)domainForMachName:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)domains;
- (id)domainsContainingServiceIdentifier:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
+ (id)defaultConfiguration;
+ (id)bootstrapConfiguration;
+ (id)activateManualDomain:;
+ (id)extendAutomaticBootstrapCompletion;
+ (id)registerDynamicDomainsFromPlist:;
@end

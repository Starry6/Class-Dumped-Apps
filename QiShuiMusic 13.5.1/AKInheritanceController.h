@interface AKInheritanceController : NSObject
@property (nonatomic) AAFXPCSession remoteService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)remoteService;
- (void)fetchManifestOptionsWithInheritanceContext:completion:;
- (void)setupBeneficiaryWithInheritanceContext:completion:;
- (void)updateBeneficiaryWithInheritanceContext:completion:;
- (void)removeBeneficiaryWithInheritanceContext:completion:;
- (void)_setupBeneficiaryAliasWithInheritanceContext:completion:;
- (id)initWithXPCSession:;
- (void)setRemoteService:;
@end

@interface AWEOpenAuthV3VirtualInfoData : MTLModel
@property (nonatomic) NSArray defaultIdentities;
@property (nonatomic) q defaultIdentityMaxCount;
@property (nonatomic) q identityMaxCount;
@property (nonatomic) NSArray userCreateIdentities;
@property (nonatomic) NSString userLastSelecteIdentityId;
@property (nonatomic) q hitExperiment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)defaultIdentities;
- (void)setDefaultIdentities:;
- (long long)defaultIdentityMaxCount;
- (void)setDefaultIdentityMaxCount:;
- (long long)identityMaxCount;
- (void)setIdentityMaxCount:;
- (id)userCreateIdentities;
- (void)setUserCreateIdentities:;
- (id)userLastSelecteIdentityId;
- (void)setUserLastSelecteIdentityId:;
- (long long)hitExperiment;
- (void)setHitExperiment:;
- (void).cxx_destruct;
+ (id)defaultIdentitiesJSONTransformer;
+ (id)userCreateIdentitiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

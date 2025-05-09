@interface AWEPublishCoCreatorSettingsModel : MTLModel
@property (nonatomic) q entryStatus;
@property (nonatomic) q certStatus;
@property (nonatomic) q albumEntryStatus;
@property (nonatomic) q albumCertStatus;
@property (nonatomic) q externalContributeStatus;
@property (nonatomic) NSString externalRestrictionMsg;
@property (nonatomic) NSArray roles;
@property (nonatomic) NSArray albumRoles;
@property (nonatomic) q maxRoleNum;
@property (nonatomic) q coPublishTimes;
@property (nonatomic) q totalCoPublishTimes;
@property (nonatomic) q currentType;
@property (nonatomic) NSString restrictionMsg;
@property (nonatomic) NSString withoutPermissionReason;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)certStatus;
- (void)setCertStatus:;
- (void)setCurrentType:;
- (long long)entryStatus;
- (id)withoutPermissionReason;
- (long long)totalCoPublishTimes;
- (long long)maxRoleNum;
- (long long)coPublishTimes;
- (id)albumRoles;
- (long long)albumCertStatus;
- (void)setCoPublishTimes:;
- (void)setTotalCoPublishTimes:;
- (long long)albumEntryStatus;
- (id)restrictionMsg;
- (long long)externalContributeStatus;
- (void)setEntryStatus:;
- (void)setAlbumEntryStatus:;
- (void)setAlbumCertStatus:;
- (void)setExternalContributeStatus:;
- (id)externalRestrictionMsg;
- (void)setExternalRestrictionMsg:;
- (void)setAlbumRoles:;
- (void)setMaxRoleNum:;
- (void)setRestrictionMsg:;
- (void)setWithoutPermissionReason:;
- (void)setRoles:;
- (id)roles;
- (void).cxx_destruct;
- (long long)currentType;
+ (id)rolesJSONTransformer;
+ (id)albumRolesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

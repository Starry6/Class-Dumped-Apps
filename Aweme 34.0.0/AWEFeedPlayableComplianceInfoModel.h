@interface AWEFeedPlayableComplianceInfoModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString version;
@property (nonatomic) AWEFeedPlayablePermissionModel permissions;
@property (nonatomic) AWEFeedPlayablePermissionModel privacy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPrivacy:;
- (BOOL)showCompanyView;
- (id)privacy;
- (id)version;
- (void)setVersion:;
- (void)setPermissions:;
- (void).cxx_destruct;
- (id)permissions;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end

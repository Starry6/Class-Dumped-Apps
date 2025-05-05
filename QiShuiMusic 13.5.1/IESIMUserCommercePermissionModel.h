@interface IESIMUserCommercePermissionModel : MTLModel
@property (nonatomic) q videoTopPermission;
@property (nonatomic) q linkAdPermission;
@property (nonatomic) q starAtlasPermission;
@property (nonatomic) q enterpriseAccount;
@property (nonatomic) q enterpriseHeadImage;
@property (nonatomic) BOOL businessPortalPermission;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldAuthorizedLinkAdAuthorize;
- (BOOL)businessPortalPermission;
- (long long)enterpriseAccount;
- (long long)enterpriseHeadImage;
- (long long)linkAdPermission;
- (void)setBusinessPortalPermission:;
- (void)setEnterpriseAccount:;
- (void)setEnterpriseHeadImage:;
- (void)setLinkAdPermission:;
- (void)setStarAtlasPermission:;
- (void)setVideoTopPermission:;
- (BOOL)shouldShowLinkAdAuthorize;
- (long long)starAtlasPermission;
- (long long)videoTopPermission;
- (id)init;
+ (id)JSONKeyPathsByPropertyKey;
@end

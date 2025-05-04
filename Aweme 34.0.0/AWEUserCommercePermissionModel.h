@interface AWEUserCommercePermissionModel : MTLModel
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
- (long long)enterpriseAccount;
- (BOOL)businessPortalPermission;
- (long long)linkAdPermission;
- (BOOL)shouldShowLinkAdAuthorize;
- (BOOL)shouldAuthorizedLinkAdAuthorize;
- (long long)videoTopPermission;
- (void)setVideoTopPermission:;
- (void)setLinkAdPermission:;
- (long long)starAtlasPermission;
- (void)setStarAtlasPermission:;
- (void)setEnterpriseAccount:;
- (long long)enterpriseHeadImage;
- (void)setEnterpriseHeadImage:;
- (void)setBusinessPortalPermission:;
- (id)init;
+ (id)JSONKeyPathsByPropertyKey;
@end

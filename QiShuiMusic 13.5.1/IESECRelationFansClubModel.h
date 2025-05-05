@interface IESECRelationFansClubModel : MTLModel
@property (nonatomic) BOOL openFansClub;
@property (nonatomic) BOOL joinStatus;
@property (nonatomic) q fansClubLevel;
@property (nonatomic) NSString fansClubUrl;
@property (nonatomic) IESECRelationFansClubBubbleConfigModel fansClubBubbleConfig;
@property (nonatomic) IESECShopFollowConfigModel fansClubCouponConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFansClubUrl:;
- (id)fansClubBubbleConfig;
- (id)fansClubCouponConfig;
- (long long)fansClubLevel;
- (id)fansClubUrl;
- (BOOL)joinStatus;
- (BOOL)openFansClub;
- (void)setFansClubBubbleConfig:;
- (void)setFansClubCouponConfig:;
- (void)setFansClubLevel:;
- (void)setJoinStatus:;
- (void)setOpenFansClub:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface IESECRelationFansClubInfoModel : MTLModel
@property (nonatomic) q fansClubLevel;
@property (nonatomic) q fansClubIntimacy;
@property (nonatomic) BOOL joinStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)fansClubIntimacy;
- (long long)fansClubLevel;
- (BOOL)joinStatus;
- (void)setFansClubIntimacy:;
- (void)setFansClubLevel:;
- (void)setJoinStatus:;
+ (id)JSONKeyPathsByPropertyKey;
@end

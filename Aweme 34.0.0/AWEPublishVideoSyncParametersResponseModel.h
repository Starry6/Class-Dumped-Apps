@interface AWEPublishVideoSyncParametersResponseModel : MTLModel
@property (nonatomic) BOOL hasClaimOriginPermission;
@property (nonatomic) BOOL isVideoExclusive;
@property (nonatomic) BOOL hasRewardProjectAuthorBenefit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasClaimOriginPermission;
- (void)setHasClaimOriginPermission:;
- (BOOL)isVideoExclusive;
- (void)setIsVideoExclusive:;
- (BOOL)hasRewardProjectAuthorBenefit;
- (void)setHasRewardProjectAuthorBenefit:;
+ (id)JSONKeyPathsByPropertyKey;
@end

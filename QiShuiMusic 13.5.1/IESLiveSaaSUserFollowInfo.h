@interface IESLiveSaaSUserFollowInfo : BDDynamicMTLModel
@property (nonatomic) NSString followSorce;
@property (nonatomic) NSNumber followingCount;
@property (nonatomic) NSNumber followerCount;
@property (nonatomic) NSString followerCountStr;
@property (nonatomic) NSString followingCountStr;
@property (nonatomic) q followStatus;
@property (nonatomic) q pushStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFollowSorce:;
- (id)followSorce;
- (id)followerCountStr;
- (id)followingCountStr;
- (id)initWithPBModel:;
- (id)initWithUserProfilePBModel:;
- (BOOL)isFollow;
- (BOOL)isFollowed;
- (id)mapToPbModel;
- (void)setFollowerCountStr:;
- (void)setFollowingCountStr:;
- (void).cxx_destruct;
+ (id)followStatusJSONTransformer;
+ (id)modelWithPBModel:;
+ (id)modelWithUserProfilePBModel:;
+ (id)JSONKeyPathsByPropertyKey;
@end

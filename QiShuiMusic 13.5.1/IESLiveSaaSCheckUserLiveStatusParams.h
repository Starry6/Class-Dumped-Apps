@interface IESLiveSaaSCheckUserLiveStatusParams : NSObject
@property (nonatomic) NSArray openUserIDs;
@property (nonatomic) NSArray distributionScenes;
@property (nonatomic) NSSet relativeLogIDs;
@property (nonatomic) NSArray isLivingArray;
- (void)setOpenUserIDs:;
- (id)distributionScenes;
- (id)isLivingArray;
- (id)openUserIDs;
- (id)relativeLogIDs;
- (void)setDistributionScenes:;
- (void)setIsLivingArray:;
- (void)setRelativeLogIDs:;
- (void).cxx_destruct;
@end

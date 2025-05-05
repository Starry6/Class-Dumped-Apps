@interface IESLiveSaaSUserFollowSyncInfo : BDDynamicMTLModel
@property (nonatomic) BOOL followerSync;
@property (nonatomic) BOOL followerScope;
@property (nonatomic) BOOL followedSync;
@property (nonatomic) BOOL anchorLiveSync;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)anchorLiveSync;
- (BOOL)followedSync;
- (BOOL)followerScope;
- (BOOL)followerSync;
- (void)setAnchorLiveSync:;
- (void)setFollowedSync:;
- (void)setFollowerScope:;
- (void)setFollowerSync:;
+ (id)JSONKeyPathsByPropertyKey;
@end

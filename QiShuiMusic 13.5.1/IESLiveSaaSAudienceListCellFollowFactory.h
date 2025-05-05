@interface IESLiveSaaSAudienceListCellFollowFactory : NSObject
@property (nonatomic) @? followAction;
@property (nonatomic) @? follwUnfollowAction;
- (id)createFollowBtn;
- (void)follow:;
- (id)followAction;
- (id)follwUnfollowAction;
- (id)initWithFollowAction:followAndUnfollowAction:;
- (void)setFollowAction:;
- (void)setFollwUnfollowAction:;
- (void).cxx_destruct;
@end

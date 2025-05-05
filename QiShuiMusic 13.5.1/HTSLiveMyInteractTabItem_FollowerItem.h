@interface HTSLiveMyInteractTabItem_FollowerItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser follower;
@property (nonatomic) BOOL hasFollower;
+ (id)descriptor;
@end

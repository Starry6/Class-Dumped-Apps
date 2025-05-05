@interface IESLiveListTagFriendContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage friendTag;
@property (nonatomic) BOOL hasFriendTag;
+ (id)descriptor;
@end

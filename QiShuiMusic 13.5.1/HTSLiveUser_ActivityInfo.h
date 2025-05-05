@interface HTSLiveUser_ActivityInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage badge;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) HTSLiveImage storyTag;
@property (nonatomic) BOOL hasStoryTag;
+ (id)descriptor;
@end

@interface HTSLiveLabelProfileItem : IESLivePBBaseMessage
@property (nonatomic) q userId;
@property (nonatomic) NSString nickName;
@property (nonatomic) HTSLiveImage profilePic;
@property (nonatomic) BOOL hasProfilePic;
+ (id)descriptor;
@end

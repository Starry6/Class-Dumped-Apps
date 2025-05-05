@interface HTSLiveLinkerFollowStrongGuideContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (nonatomic) NSString toUserOpenId;
@property (nonatomic) NSInteger fromUserType;
+ (id)descriptor;
@end

@interface IESLiveChannelListUser : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSInteger linkStatus;
@property (nonatomic) NSInteger linkType;
@property (nonatomic) NSInteger silenceStatus;
@property (nonatomic) q modifyTime;
@property (nonatomic) q linkerId;
@property (nonatomic) NSInteger roleType;
@property (nonatomic) NSInteger applyType;
@property (nonatomic) NSInteger inviteType;
@property (nonatomic) q linkerReportor;
@property (nonatomic) NSString rtcUserId;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end

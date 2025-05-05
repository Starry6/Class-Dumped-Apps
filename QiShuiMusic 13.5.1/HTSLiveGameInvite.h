@interface HTSLiveGameInvite : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) q kind;
@property (nonatomic) q createTime;
@property (nonatomic) q nowTime;
@property (nonatomic) q expireTime;
@property (nonatomic) q status;
@property (nonatomic) q roomId;
@property (nonatomic) NSString idStr;
+ (id)descriptor;
@end

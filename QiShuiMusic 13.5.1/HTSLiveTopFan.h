@interface HTSLiveTopFan : IESLivePBBaseMessage
@property (nonatomic) q fanTicket;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
+ (id)descriptor;
@end

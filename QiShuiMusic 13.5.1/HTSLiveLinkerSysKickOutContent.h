@interface HTSLiveLinkerSysKickOutContent : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) NSString toastMsg;
@property (nonatomic) NSInteger kickOutSource;
+ (id)descriptor;
@end

@interface HTSLiveLinkerApplyStrongReminderContent : IESLivePBBaseMessage
@property (nonatomic) NSInteger source;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
+ (id)descriptor;
@end

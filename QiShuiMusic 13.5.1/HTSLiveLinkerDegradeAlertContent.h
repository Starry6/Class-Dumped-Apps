@interface HTSLiveLinkerDegradeAlertContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString degradeContent;
+ (id)descriptor;
@end

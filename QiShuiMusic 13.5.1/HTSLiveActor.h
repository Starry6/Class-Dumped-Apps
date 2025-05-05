@interface HTSLiveActor : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString label;
+ (id)descriptor;
@end

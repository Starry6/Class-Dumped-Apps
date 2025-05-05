@interface FlexActivity_RegisteredUser : IESLivePBBaseMessage
@property (nonatomic) BattleUserInfo user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString descText;
+ (id)descriptor;
@end

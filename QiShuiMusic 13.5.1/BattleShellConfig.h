@interface BattleShellConfig : IESLivePBBaseMessage
@property (nonatomic) q shellType;
@property (nonatomic) NSString name;
+ (id)descriptor;
@end

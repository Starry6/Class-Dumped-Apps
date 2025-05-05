@interface IESLiveHeartDiamondInfo : IESLivePBBaseMessage
@property (nonatomic) NSString percent;
@property (nonatomic) HTSLiveImage heartDiamondIcon;
@property (nonatomic) BOOL hasHeartDiamondIcon;
@property (nonatomic) NSInteger level;
+ (id)descriptor;
@end

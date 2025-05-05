@interface IESLiveLinkmicBadge : IESLivePBBaseMessage
@property (nonatomic) NSString dressId;
@property (nonatomic) NSInteger showType;
+ (id)descriptor;
@end

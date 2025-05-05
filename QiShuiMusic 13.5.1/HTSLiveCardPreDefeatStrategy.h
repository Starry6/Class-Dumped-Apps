@interface HTSLiveCardPreDefeatStrategy : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) q value;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end

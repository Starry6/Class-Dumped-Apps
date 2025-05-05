@interface HTSLiveGoodsBizItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveBizGoods goods;
@property (nonatomic) BOOL hasGoods;
@property (nonatomic) HTSLiveBizEntrance entrance;
@property (nonatomic) BOOL hasEntrance;
+ (id)descriptor;
@end

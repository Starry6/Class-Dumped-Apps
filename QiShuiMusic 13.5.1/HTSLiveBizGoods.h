@interface HTSLiveBizGoods : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGoodsStruct goods;
@property (nonatomic) BOOL hasGoods;
@property (nonatomic) NSString extra;
@property (nonatomic) q consumeScene;
+ (id)descriptor;
@end

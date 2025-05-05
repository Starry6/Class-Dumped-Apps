@interface HTSLiveEcomData : IESLivePBBaseMessage
@property (nonatomic) EcomGoodsCard goodsCard;
@property (nonatomic) BOOL hasGoodsCard;
@property (nonatomic) HTSLiveRoomCartV2 roomCartV2;
@property (nonatomic) BOOL hasRoomCartV2;
@property (nonatomic) EcomLiveCard liveCard;
@property (nonatomic) BOOL hasLiveCard;
@property (nonatomic) NSMutableArray redsShowInfosArray;
@property (nonatomic) Q redsShowInfosArray_Count;
@property (nonatomic) EcomPop pop;
@property (nonatomic) BOOL hasPop;
+ (id)descriptor;
@end

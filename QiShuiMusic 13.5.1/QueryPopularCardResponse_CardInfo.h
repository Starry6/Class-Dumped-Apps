@interface QueryPopularCardResponse_CardInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray cardsArray;
@property (nonatomic) Q cardsArray_Count;
@property (nonatomic) q total;
@property (nonatomic) q totalEnterNumber;
+ (id)descriptor;
@end

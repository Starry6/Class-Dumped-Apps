@interface DiamondBuyResult : IESLivePBBaseMessage
@property (nonatomic) DiamondBuyResult_DiamondBuyData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) DiamondBuyResult_ResponseExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end

@interface GoodsBuyResult : IESLivePBBaseMessage
@property (nonatomic) GoodsBuyResult_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

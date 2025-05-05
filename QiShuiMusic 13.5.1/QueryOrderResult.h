@interface QueryOrderResult : IESLivePBBaseMessage
@property (nonatomic) QueryOrderResult_ChargeOrderData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) QueryOrderResult_ChargeOrderExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end

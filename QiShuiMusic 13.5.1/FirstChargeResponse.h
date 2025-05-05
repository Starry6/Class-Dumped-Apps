@interface FirstChargeResponse : IESLivePBBaseMessage
@property (nonatomic) FirstChargeResponse_FirstChargeData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

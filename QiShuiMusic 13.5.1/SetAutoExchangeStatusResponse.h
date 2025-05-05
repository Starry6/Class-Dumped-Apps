@interface SetAutoExchangeStatusResponse : IESLivePBBaseMessage
@property (nonatomic) SetAutoExchangeStatusResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

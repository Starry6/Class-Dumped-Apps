@interface AckTouchResponse : IESLivePBBaseMessage
@property (nonatomic) AckTouchResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

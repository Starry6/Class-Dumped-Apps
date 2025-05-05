@interface UpdateGameStatusResponse : IESLivePBBaseMessage
@property (nonatomic) UpdateGameStatusResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

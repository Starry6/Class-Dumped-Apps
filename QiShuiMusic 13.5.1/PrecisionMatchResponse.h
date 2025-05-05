@interface PrecisionMatchResponse : IESLivePBBaseMessage
@property (nonatomic) PrecisionMatchResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

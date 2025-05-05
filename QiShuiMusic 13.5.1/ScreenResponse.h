@interface ScreenResponse : IESLivePBBaseMessage
@property (nonatomic) ScreenResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

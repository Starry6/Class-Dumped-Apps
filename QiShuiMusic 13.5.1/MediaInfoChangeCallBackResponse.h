@interface MediaInfoChangeCallBackResponse : IESLivePBBaseMessage
@property (nonatomic) MediaInfoChangeCallBackResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

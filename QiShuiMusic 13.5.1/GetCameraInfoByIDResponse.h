@interface GetCameraInfoByIDResponse : IESLivePBBaseMessage
@property (nonatomic) GetCameraInfoByIDResponse_Entry data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

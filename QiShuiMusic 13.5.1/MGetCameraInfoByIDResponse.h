@interface MGetCameraInfoByIDResponse : IESLivePBBaseMessage
@property (nonatomic) MGetCameraInfoByIDResponse_Entry data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

@interface CameraInfosResponse : IESLivePBBaseMessage
@property (nonatomic) CameraInfosResponse_Entry data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

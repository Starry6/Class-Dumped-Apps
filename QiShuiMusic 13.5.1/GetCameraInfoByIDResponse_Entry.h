@interface GetCameraInfoByIDResponse_Entry : IESLivePBBaseMessage
@property (nonatomic) HTSLiveVSCameraInfo vsCameraInfo;
@property (nonatomic) BOOL hasVsCameraInfo;
+ (id)descriptor;
@end

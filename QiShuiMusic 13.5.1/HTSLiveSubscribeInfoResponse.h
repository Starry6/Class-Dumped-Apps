@interface HTSLiveSubscribeInfoResponse : IESLivePBBaseMessage
@property (nonatomic) HTSLiveSubscribeInfoResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

@interface InteractDressInfoResponse : IESLivePBBaseMessage
@property (nonatomic) InteractDressInfoResponse_DressInfo data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

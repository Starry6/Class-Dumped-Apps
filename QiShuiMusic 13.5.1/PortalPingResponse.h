@interface PortalPingResponse : IESLivePBBaseMessage
@property (nonatomic) PortalPingResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

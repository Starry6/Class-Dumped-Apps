@interface PortalStatsResponse : IESLivePBBaseMessage
@property (nonatomic) PortalStatsResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

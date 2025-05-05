@interface PortalStatsResponse_Data : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray portalsArray;
@property (nonatomic) Q portalsArray_Count;
+ (id)descriptor;
@end

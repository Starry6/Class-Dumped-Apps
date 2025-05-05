@interface PopularStatusResponse : IESLivePBBaseMessage
@property (nonatomic) PopularStatusResponse_PopularStatus data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

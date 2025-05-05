@interface GiftsDetailResponse : IESLivePBBaseMessage
@property (nonatomic) GiftsDetailResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

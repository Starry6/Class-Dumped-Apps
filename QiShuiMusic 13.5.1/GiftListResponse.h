@interface GiftListResponse : IESLivePBBaseMessage
@property (nonatomic) GiftListResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

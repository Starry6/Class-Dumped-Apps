@interface GiftExtraResponse : IESLivePBBaseMessage
@property (nonatomic) GiftExtraResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end

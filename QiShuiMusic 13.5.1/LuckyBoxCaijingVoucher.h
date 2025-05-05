@interface LuckyBoxCaijingVoucher : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray voucherGroupArray;
@property (nonatomic) Q voucherGroupArray_Count;
@property (nonatomic) NSString voucherName;
@property (nonatomic) NSString activityId;
+ (id)descriptor;
@end

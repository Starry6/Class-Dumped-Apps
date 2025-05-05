@interface RushLuckyBoxResponse_ExpandAward : IESLivePBBaseMessage
@property (nonatomic) RushLuckyBoxResponse_CaijingVoucher caijingVoucher;
@property (nonatomic) BOOL hasCaijingVoucher;
+ (id)descriptor;
@end

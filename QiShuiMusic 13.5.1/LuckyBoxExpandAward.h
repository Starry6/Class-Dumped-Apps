@interface LuckyBoxExpandAward : IESLivePBBaseMessage
@property (nonatomic) LuckyBoxCaijingVoucher caijingVoucher;
@property (nonatomic) BOOL hasCaijingVoucher;
+ (id)descriptor;
@end

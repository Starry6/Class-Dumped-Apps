@interface TeamTask_ExtraConfig : IESLivePBBaseMessage
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) TeamTask_SpecialGiftCountConfig specialGiftCountConfig;
+ (id)descriptor;
@end

@interface GiftComboInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger comboCount;
@property (nonatomic) HTSLiveImage comboEffectImg;
@property (nonatomic) BOOL hasComboEffectImg;
+ (id)descriptor;
@end

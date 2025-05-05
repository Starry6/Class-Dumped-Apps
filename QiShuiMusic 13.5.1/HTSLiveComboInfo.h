@interface HTSLiveComboInfo : IESLivePBBaseMessage
@property (nonatomic) q comboSeq;
@property (nonatomic) q comboOrder;
+ (id)descriptor;
@end

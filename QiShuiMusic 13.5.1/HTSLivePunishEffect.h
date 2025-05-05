@interface HTSLivePunishEffect : IESLivePBBaseMessage
@property (nonatomic) q effectId;
@property (nonatomic) NSString effectName;
@property (nonatomic) HTSLiveImage effectImage;
@property (nonatomic) BOOL hasEffectImage;
@property (nonatomic) q lowestScore;
@property (nonatomic) q duration;
@property (nonatomic) q needMedicineCount;
@property (nonatomic) BOOL usable;
@property (nonatomic) NSInteger level;
+ (id)descriptor;
@end

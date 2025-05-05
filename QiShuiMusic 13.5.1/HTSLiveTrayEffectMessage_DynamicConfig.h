@interface HTSLiveTrayEffectMessage_DynamicConfig : IESLivePBBaseMessage
@property (nonatomic) NSInteger delayTime;
@property (nonatomic) q startTimeStamp;
@property (nonatomic) q allowExceedTime;
@property (nonatomic) q endTimeStamp;
@property (nonatomic) NSInteger duration;
@property (nonatomic) NSInteger displayEffectType;
@property (nonatomic) HTSLiveTrayEffectMessage_ComboInfo comboInfo;
@property (nonatomic) BOOL hasComboInfo;
@property (nonatomic) BOOL isAssemble;
+ (id)descriptor;
@end

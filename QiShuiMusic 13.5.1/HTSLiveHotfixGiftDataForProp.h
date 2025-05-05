@interface HTSLiveHotfixGiftDataForProp : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) NSString describe;
@property (nonatomic) q giftId;
@property (nonatomic) q groupCount;
@property (nonatomic) q repeatCount;
@property (nonatomic) q comboCount;
@property (nonatomic) q msgId;
+ (id)descriptor;
@end

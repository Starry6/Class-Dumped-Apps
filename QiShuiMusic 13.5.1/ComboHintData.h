@interface ComboHintData : IESLivePBBaseMessage
@property (nonatomic) q leftGiftCount;
@property (nonatomic) HTSLiveImage hintImg;
@property (nonatomic) BOOL hasHintImg;
+ (id)descriptor;
@end

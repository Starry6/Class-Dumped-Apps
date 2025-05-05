@interface HTSLiveEnterGiftAnimation : IESLivePBBaseMessage
@property (nonatomic) NSInteger giftEffectId;
@property (nonatomic) NSInteger displayGap;
@property (nonatomic) NSInteger displayFreq;
+ (id)descriptor;
@end

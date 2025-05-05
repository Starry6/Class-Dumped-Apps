@interface HTSLiveTreasureDetail : IESLivePBBaseMessage
@property (nonatomic) NSString key;
@property (nonatomic) NSString content;
@property (nonatomic) q countDown;
@property (nonatomic) NSInteger triggerTiming;
@property (nonatomic) NSString countDownKey;
+ (id)descriptor;
@end

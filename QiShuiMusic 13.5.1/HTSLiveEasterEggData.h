@interface HTSLiveEasterEggData : IESLivePBBaseMessage
@property (nonatomic) BOOL hasEasterEgg;
@property (nonatomic) q stage;
@property (nonatomic) q totalStage;
@property (nonatomic) q effectsNum;
@property (nonatomic) q startCount;
@property (nonatomic) q endCount;
@property (nonatomic) q count;
@property (nonatomic) NSString panelURL;
@property (nonatomic) HTSLiveImage entranceIcon;
@property (nonatomic) BOOL hasEntranceIcon;
+ (id)descriptor;
@end

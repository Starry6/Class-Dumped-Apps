@interface HTSLiveBurstInfo : IESLivePBBaseMessage
@property (nonatomic) q burstTimeRemainSeconds;
@property (nonatomic) q multiple;
@property (nonatomic) q propertyDefinitionId;
@property (nonatomic) HTSLiveImage propertyIcon;
@property (nonatomic) BOOL hasPropertyIcon;
+ (id)descriptor;
@end

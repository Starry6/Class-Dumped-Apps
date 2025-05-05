@interface HTSLiveBattlePowerContainerMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q channelId;
@property (nonatomic) q battleId;
@property (nonatomic) NSString reverseInfo;
@property (nonatomic) NSString container;
+ (id)descriptor;
@end

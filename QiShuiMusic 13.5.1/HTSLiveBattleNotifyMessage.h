@interface HTSLiveBattleNotifyMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString content;
@property (nonatomic) NSInteger notifyType;
@property (nonatomic) q continueSeconds;
+ (id)descriptor;
@end

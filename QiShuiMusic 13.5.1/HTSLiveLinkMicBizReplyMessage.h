@interface HTSLiveLinkMicBizReplyMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger bizType;
@property (nonatomic) NSInteger inviteType;
@property (nonatomic) NSInteger repCode;
@property (nonatomic) IESLiveLinkMicBizExtra battleConfigSetting;
@property (nonatomic) BOOL hasBattleConfigSetting;
@property (nonatomic) NSString rejectPrompts;
+ (id)descriptor;
@end

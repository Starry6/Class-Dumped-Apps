@interface HTSLiveBattleUseCardMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) ItemCardInfo info;
@property (nonatomic) BOOL hasInfo;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end

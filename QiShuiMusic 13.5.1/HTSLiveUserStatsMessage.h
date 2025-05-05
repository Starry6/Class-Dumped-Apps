@interface HTSLiveUserStatsMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString content;
@property (nonatomic) q userId;
@property (nonatomic) q actionType;
+ (id)descriptor;
@end

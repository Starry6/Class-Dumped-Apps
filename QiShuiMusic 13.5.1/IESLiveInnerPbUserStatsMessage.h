@interface IESLiveInnerPbUserStatsMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString content;
@property (nonatomic) q userId;
@property (nonatomic) q actionType;
+ (id)descriptor;
@end

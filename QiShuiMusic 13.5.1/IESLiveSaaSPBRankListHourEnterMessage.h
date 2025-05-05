@interface IESLiveSaaSPBRankListHourEnterMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveSaaSPBRankRankEnterInfo hourEnterInfo;
@property (nonatomic) BOOL hasHourEnterInfo;
+ (id)descriptor;
@end

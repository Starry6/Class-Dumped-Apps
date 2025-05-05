@interface IESLiveSaaSPBOChannelUserMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q startTimestamp;
@property (nonatomic) q endTimestamp;
@property (nonatomic) q maxEnterTime;
@property (nonatomic) q roomId;
@property (nonatomic) q maxNextTime;
+ (id)descriptor;
@end

@interface IESLiveSaaSPBOChannelModifyMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q startTimestamp;
@property (nonatomic) q endTimestamp;
@property (nonatomic) NSString channelOpenId;
+ (id)descriptor;
@end

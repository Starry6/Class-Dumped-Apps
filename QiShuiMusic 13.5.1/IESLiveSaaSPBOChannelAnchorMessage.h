@interface IESLiveSaaSPBOChannelAnchorMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q startTimestamp;
@property (nonatomic) q endTimestamp;
@property (nonatomic) NSString content;
@property (nonatomic) q roomId;
@property (nonatomic) IESLiveSaaSPBUser channelUser;
@property (nonatomic) BOOL hasChannelUser;
+ (id)descriptor;
@end

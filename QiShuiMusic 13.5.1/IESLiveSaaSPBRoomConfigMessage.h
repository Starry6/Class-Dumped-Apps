@interface IESLiveSaaSPBRoomConfigMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString configInfo;
@property (nonatomic) q configType;
+ (id)descriptor;
@end

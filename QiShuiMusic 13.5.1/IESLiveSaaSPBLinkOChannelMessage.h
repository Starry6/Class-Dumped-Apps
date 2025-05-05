@interface IESLiveSaaSPBLinkOChannelMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) IESLiveSaaSPBLinkOChannelShow3HourBeforeStartContent show3HoursBeforeStartContent;
@property (nonatomic) IESLiveSaaSPBLinkOChannelKickOutGuestContent kickOutGuestContent;
@property (nonatomic) IESLiveSaaSPBLinkOChannelHostModifyContent hostModifyContent;
+ (id)descriptor;
@end

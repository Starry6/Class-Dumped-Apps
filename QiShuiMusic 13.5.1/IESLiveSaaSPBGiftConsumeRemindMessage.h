@interface IESLiveSaaSPBGiftConsumeRemindMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString lynxSchema;
@property (nonatomic) IESLiveSaaSPBLynxParam lynxParam;
@property (nonatomic) BOOL hasLynxParam;
@property (nonatomic) NSInteger remindType;
+ (id)descriptor;
@end

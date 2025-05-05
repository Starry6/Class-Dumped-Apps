@interface HTSLiveGiftConsumeRemindMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString lynxSchema;
@property (nonatomic) HTSLiveLynxParam lynxParam;
@property (nonatomic) BOOL hasLynxParam;
@property (nonatomic) NSInteger remindType;
+ (id)descriptor;
@end

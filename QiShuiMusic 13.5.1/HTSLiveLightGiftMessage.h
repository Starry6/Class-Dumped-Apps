@interface HTSLiveLightGiftMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q groupCount;
@property (nonatomic) q repeatCount;
@property (nonatomic) q comboCount;
@property (nonatomic) NSString toOpenid;
@property (nonatomic) HTSLiveGiftIMPriority priority;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) HTSLiveGiftInfo giftInfo;
@property (nonatomic) BOOL hasGiftInfo;
@property (nonatomic) HTSLiveGiftLiteTrayInfo trayInfo;
@property (nonatomic) BOOL hasTrayInfo;
@property (nonatomic) q sendType;
@property (nonatomic) q count;
@property (nonatomic) NSString diyItemInfo;
@property (nonatomic) q bannedDisplayEffects;
@property (nonatomic) HTSLiveGiftStruct giftStruct;
@property (nonatomic) BOOL hasGiftStruct;
+ (id)descriptor;
@end

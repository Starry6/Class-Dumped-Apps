@interface IESLiveInnerPbDoodleGiftMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q giftId;
@property (nonatomic) q fanTicketCount;
@property (nonatomic) IESLiveInnerPbUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) IESLiveInnerPbUser toUser;
@property (nonatomic) BOOL hasToUser;
@property (nonatomic) NSString compose;
@property (nonatomic) q roomFanTicketCount;
@property (nonatomic) IESLiveInnerPbGiftIMPriority priority;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) NSString logId;
@property (nonatomic) IESLiveInnerPbPublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) HTSLiveText trayDisplayText;
@property (nonatomic) BOOL hasTrayDisplayText;
+ (id)descriptor;
@end

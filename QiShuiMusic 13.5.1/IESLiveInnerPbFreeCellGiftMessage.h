@interface IESLiveInnerPbFreeCellGiftMessage : GPBMessage
@property (nonatomic) BOOL isFakedChainsGift;
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q giftId;
@property (nonatomic) q fanTicketCount;
@property (nonatomic) q groupCount;
@property (nonatomic) q repeatCount;
@property (nonatomic) q comboCount;
@property (nonatomic) IESLiveInnerPbUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) IESLiveInnerPbUser toUser;
@property (nonatomic) BOOL hasToUser;
@property (nonatomic) IESLiveInnerPbFreeCellGiftMessage_FreeCellData freeCell;
@property (nonatomic) BOOL hasFreeCell;
@property (nonatomic) q roomFanTicketCount;
@property (nonatomic) NSString logId;
@property (nonatomic) IESLiveInnerPbPublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
- (BOOL)isFakedChainsGift;
- (void)setIsFakedChainsGift:;
+ (id)descriptor;
@end

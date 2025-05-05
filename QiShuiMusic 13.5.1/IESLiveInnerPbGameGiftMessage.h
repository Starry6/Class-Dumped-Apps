@interface IESLiveInnerPbGameGiftMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q giftId;
@property (nonatomic) q fanTicketCount;
@property (nonatomic) IESLiveInnerPbUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) IESLiveInnerPbUser toUser;
@property (nonatomic) BOOL hasToUser;
@property (nonatomic) NSString normalContent;
@property (nonatomic) NSString logId;
@property (nonatomic) IESLiveInnerPbPublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
+ (id)descriptor;
@end

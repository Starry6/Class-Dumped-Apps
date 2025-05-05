@interface QueryGiftRecordsResp_GiftRecordInfo : IESLivePBBaseMessage
@property (nonatomic) NSString recId;
@property (nonatomic) q sendTime;
@property (nonatomic) HTSLiveUser fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (nonatomic) HTSLiveUser oriToUser;
@property (nonatomic) BOOL hasOriToUser;
@property (nonatomic) HTSLiveUser resendToUser;
@property (nonatomic) BOOL hasResendToUser;
@property (nonatomic) NSString giftName;
@property (nonatomic) q giftCount;
@property (nonatomic) q giftDiamond;
@property (nonatomic) NSString giftId;
+ (id)descriptor;
@end

@interface TransGiftRecordsReq : IESLivePBBaseMessage
@property (nonatomic) NSString roomId;
@property (nonatomic) NSString resendToOpenid;
@property (nonatomic) NSString giftRecIds;
+ (id)descriptor;
@end

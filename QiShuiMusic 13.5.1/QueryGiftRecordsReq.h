@interface QueryGiftRecordsReq : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) q limit;
@property (nonatomic) NSString queryGiftName;
@property (nonatomic) NSString querySendUserName;
@property (nonatomic) NSInteger queryType;
@property (nonatomic) NSString cursorRecId;
@property (nonatomic) q cursorEndTime;
+ (id)descriptor;
@end

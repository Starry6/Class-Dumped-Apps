@interface HTSLiveShareTicket : IESLivePBBaseMessage
@property (nonatomic) BOOL hasShare;
@property (nonatomic) HTSLiveUser fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (nonatomic) NSString packageRecordId;
@property (nonatomic) BOOL hasGrabShare;
+ (id)descriptor;
@end

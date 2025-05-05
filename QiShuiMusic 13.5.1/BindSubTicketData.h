@interface BindSubTicketData : IESLivePBBaseMessage
@property (nonatomic) NSString ticketId;
@property (nonatomic) NSString parentTicketId;
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger liveStatus;
@property (nonatomic) NSInteger ticketStatus;
@property (nonatomic) NSString detail;
@property (nonatomic) NSString vid;
@property (nonatomic) NSString roomId;
@property (nonatomic) NSInteger delivery;
@property (nonatomic) q liveTime;
@property (nonatomic) q endTime;
@property (nonatomic) q liveStartTime;
@property (nonatomic) q liveEndTime;
@property (nonatomic) q viewRight;
@property (nonatomic) BOOL isReplay;
@property (nonatomic) q replayId;
@property (nonatomic) NSString replayIdStr;
@property (nonatomic) NSInteger disableReason;
+ (id)descriptor;
@end

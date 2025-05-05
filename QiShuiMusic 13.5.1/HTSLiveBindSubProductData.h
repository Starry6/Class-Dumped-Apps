@interface HTSLiveBindSubProductData : IESLivePBBaseMessage
@property (nonatomic) NSString productId;
@property (nonatomic) NSString parentProductId;
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger liveStatus;
@property (nonatomic) NSInteger ticketStatus;
@property (nonatomic) NSString detail;
@property (nonatomic) NSString vid;
@property (nonatomic) NSString roomId;
@property (nonatomic) NSInteger deliveryStatus;
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

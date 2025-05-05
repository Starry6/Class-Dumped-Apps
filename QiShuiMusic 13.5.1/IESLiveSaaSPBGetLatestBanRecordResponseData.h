@interface IESLiveSaaSPBGetLatestBanRecordResponseData : GPBMessage
@property (nonatomic) q banTime;
@property (nonatomic) q banDuration;
@property (nonatomic) BOOL isBannedForever;
@property (nonatomic) NSString banReason;
@property (nonatomic) NSInteger banStatus;
@property (nonatomic) NSString logIdStr;
@property (nonatomic) q webcastAppealStatus;
@property (nonatomic) q banType;
@property (nonatomic) BOOL isFromShield;
@property (nonatomic) BOOL specialSerial;
@property (nonatomic) NSString title;
@property (nonatomic) NSString detailURL;
@property (nonatomic) q banTimeLeft;
@property (nonatomic) q freezeMoney;
@property (nonatomic) NSString banDetailStr;
@property (nonatomic) q freezeStatus;
@property (nonatomic) NSString adjustAdvice;
@property (nonatomic) NSString appealURL;
+ (id)descriptor;
@end

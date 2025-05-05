@interface STWeeklyReportUserNotificationContext : STUserNotificationContext
@property (nonatomic) NSString notificationBodyKey;
@property (nonatomic) double deltaScreenTimeUsage;
@property (nonatomic) NSNumber totalUsage;
@property (nonatomic) NSData weeklyReportData;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)customizeNotificationContent:withCompletionBlock:;
- (void)setDeltaScreenTimeUsage:totalUsage:;
- (id)weeklyReportData;
- (void)setWeeklyReportData:;
- (double)deltaScreenTimeUsage;
- (void)setDeltaScreenTimeUsage:;
- (id)totalUsage;
- (void)setTotalUsage:;
- (id)notificationBodyKey;
- (void)setNotificationBodyKey:;
+ (BOOL)supportsSecureCoding;
@end

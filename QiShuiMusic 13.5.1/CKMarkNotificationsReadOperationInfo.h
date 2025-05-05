@interface CKMarkNotificationsReadOperationInfo : CKOperationInfo
@property (nonatomic) NSArray notificationIDs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)notificationIDs;
- (void)setNotificationIDs:;
+ (BOOL)supportsSecureCoding;
@end

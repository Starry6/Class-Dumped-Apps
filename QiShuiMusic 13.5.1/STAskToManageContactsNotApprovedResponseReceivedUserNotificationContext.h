@interface STAskToManageContactsNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext
@property (nonatomic) NSString childName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)customizeNotificationContent:withCompletionBlock:;
- (id)childName;
- (void)setChildName:;
- (id)initWithChildName:;
+ (BOOL)supportsSecureCoding;
@end

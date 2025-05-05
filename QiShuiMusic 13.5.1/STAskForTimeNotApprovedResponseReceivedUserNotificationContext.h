@interface STAskForTimeNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext
@property (nonatomic) NSString parentName;
@property (nonatomic) NSString requestedResourceName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)customizeNotificationContent:withCompletionBlock:;
- (id)parentName;
- (void)setParentName:;
- (id)requestedResourceName;
- (void)setRequestedResourceName:;
- (id)initWithAskForTimeRequestIdentifier:parentName:requestedResourceName:;
+ (BOOL)supportsSecureCoding;
@end

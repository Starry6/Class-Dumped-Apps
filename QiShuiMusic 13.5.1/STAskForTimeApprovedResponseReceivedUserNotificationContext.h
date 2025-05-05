@interface STAskForTimeApprovedResponseReceivedUserNotificationContext : STUserNotificationContext
@property (nonatomic) NSString parentName;
@property (nonatomic) NSString requestedResourceName;
@property (nonatomic) double amountGranted;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)customizeNotificationContent:withCompletionBlock:;
- (id)initWithAskForTimeRequestIdentifier:parentName:requestedResourceName:amountGranted:;
- (id)parentName;
- (void)setParentName:;
- (id)requestedResourceName;
- (void)setRequestedResourceName:;
- (double)amountGranted;
- (void)setAmountGranted:;
+ (BOOL)supportsSecureCoding;
@end

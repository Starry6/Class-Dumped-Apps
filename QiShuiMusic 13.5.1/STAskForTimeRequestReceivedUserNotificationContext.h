@interface STAskForTimeRequestReceivedUserNotificationContext : STUserNotificationContext
@property (nonatomic) NSString childName;
@property (nonatomic) NSNumber childDSID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)customizeNotificationContent:withCompletionBlock:;
- (id)initWithAskForTimeRequestIdentifier:childName:childDSID:requestedResourceName:;
- (id)initWithAskForTimeRequestIdentifier:familyMember:requestedResourceName:;
- (void)_fetchAndWriteFamilyPhotoURLIfNeeded:;
- (id)childName;
- (void)setChildName:;
- (id)childDSID;
- (void)setChildDSID:;
+ (BOOL)supportsSecureCoding;
@end

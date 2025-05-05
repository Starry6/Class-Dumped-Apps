@interface DMFDevicePropertyNotificationSubscriptionRequest : DMFTaskRequest
@property (nonatomic) NSArray propertyKeys;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setPropertyKeys:;
- (id)propertyKeys;
+ (BOOL)supportsSecureCoding;
@end

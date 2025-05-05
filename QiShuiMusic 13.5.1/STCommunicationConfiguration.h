@interface STCommunicationConfiguration : NSObject
@property (nonatomic) BOOL isCommunicationSafetySendingRestricted;
@property (nonatomic) BOOL isCommunicationSafetyReceivingRestricted;
@property (nonatomic) BOOL isCommunicationSafetyNotificationEnabled;
@property (nonatomic) BOOL isCommunicationSafetyAnalyticsEnabled;
- (BOOL)isCommunicationSafetyNotificationEnabled;
- (BOOL)isEqualToCommunicationConfiguration:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithCommunicationSafetySendingRestricted:communicationSafetyReceivingRestricted:communicationSafetyNotificationEnabled:communicationSafetyAnalyticsEnabled:;
- (BOOL)isCommunicationSafetyReceivingRestricted;
- (BOOL)isCommunicationSafetySendingRestricted;
- (BOOL)isEqual:;
- (BOOL)isCommunicationSafetyAnalyticsEnabled;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

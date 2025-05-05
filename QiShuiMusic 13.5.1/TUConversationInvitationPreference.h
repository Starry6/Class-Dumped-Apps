@interface TUConversationInvitationPreference : NSObject
@property (nonatomic) q handleType;
@property (nonatomic) q notificationStyles;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)handleType;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)notificationStyles;
- (id)initWithHandleType:notificationStyles:;
- (BOOL)isEqualToInvitationPreference:;
+ (BOOL)supportsSecureCoding;
+ (id)invitationPreferencesForAllHandlesWithStyles:;
+ (long long)validateNotificationStyles:;
+ (id)standardInvitationPreferencesForLink;
+ (id)letMeInResponseInvitationPreferences;
+ (id)noNotificationInvitationPreferences;
+ (id)incomingCallInvitationPreferences;
@end

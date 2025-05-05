@interface PPTClientDonation : NSObject
+ (BOOL)isRegisteredSubsystem:category:;
+ (void)sendEventWithIdentifier:payload:;
+ (id)createIdentifierForSubsystem:category:;
@end

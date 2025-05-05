@interface IMIDSUtilities : NSObject
+ (int)verifyFromID:comesFromAccount:;
+ (void)findCommonCapabilitiesAcrossRecipients:serviceName:capsToCheck:completion:;
@end

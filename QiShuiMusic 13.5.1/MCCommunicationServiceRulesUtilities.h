@interface MCCommunicationServiceRulesUtilities : NSObject
+ (id)defaultAppBundleIDForCommunicationServiceType:forAccountWithIdentifier:;
+ (id)validServiceTypes;
+ (id)validatedCommunicationServiceRules:outError:;
+ (id)restrictionsForValidatedCommunicationServiceRules:;
@end

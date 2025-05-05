@interface SFDomainAssociationUtilities : NSObject
+ (BOOL)highLevelDomainHasSuiteOfAssociatedApps:;
+ (BOOL)domainIsProhibitedForSavingCredentials:;
+ (id)domainByStrippingSubdomainWildcardPrefixIfNecessary:;
@end

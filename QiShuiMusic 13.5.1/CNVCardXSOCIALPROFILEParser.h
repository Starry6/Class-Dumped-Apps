@interface CNVCardXSOCIALPROFILEParser : NSObject
+ (id)os_log;
+ (id)valueWithParser:;
+ (id)profileFromURL:;
+ (void)processExtensionValuesForLines:parser:;
+ (id)urlSuffixForSocialProperty:;
+ (id)typeForSocialProperty:;
+ (void)handleSpecialCaseUpdateForService:socialProfile:;
+ (void)handleBundleIndentifiersAsList:socialProfile:;
+ (id)adjust:withParameters:;
+ (id)parametersForSocialProperty:;
+ (id)rawForSocialProperty:;
+ (id)unwrapDoubleQuotedProperty:;
+ (id)unfold:;
+ (BOOL)propertyLooksLikeDOSAttackString:;
@end

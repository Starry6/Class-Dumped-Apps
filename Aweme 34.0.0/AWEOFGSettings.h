@interface AWEOFGSettings : NSObject
+ (id)firstPartyH5DomainBlockList;
+ (id)firstPartyH5DomainList;
+ (id)secondPartyConfigList;
+ (BOOL)enableOFGJSBWithDefault:;
+ (id)enableOFGJSBWhiteList;
+ (id)globalWhiteJsbList;
+ (BOOL)enableOFGNative;
+ (BOOL)enableSendNativeInvokeEvent;
+ (id)blackScopeList;
+ (id)jsbSettingsDict;
+ (id)nativeSettingsDict;
+ (id)domainPartyConfigSettingsDict;
+ (id)secondPartyConfigSettingsDict;
+ (BOOL)enableOFGJSB;
@end

@interface WBSWebExtensionUtilities : NSObject
+ (BOOL)isTabIDValid:;
+ (BOOL)tab:matchesQueryInfo:idOfCurrentWindow:webExtension:;
+ (double)nextWindowID;
+ (id)tabIDToTabPositionDictionaryForTabs:;
+ (id)windowStateForWindow:webExtension:shouldPopulateTabs:;
+ (id)tabStateRespectingPermissionsForTab:webExtension:;
+ (double)nextTabID;
+ (id)changeInfoForOnUpdatedEventRespectingPermissionsForTab:changedProperties:webExtension:;
+ (id)urlFromTabsCreateOrUpdatePropertiesDictionary:webExtension:;
+ (double)storageSizeForKeysAndValues:;
+ (BOOL)isWindowIDValid:;
+ (id)serializeObjectToJSON:;
+ (double)storageSizeForKeyOrValue:;
+ (BOOL)validateContentsOfDictionary:requiredKeys:optionalKeys:keyToExpectedValueType:outExceptionString:;
@end

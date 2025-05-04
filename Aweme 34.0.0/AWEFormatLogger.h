@interface AWEFormatLogger : NSObject
+ (void)logWithInstanceName:level:moduleName:subModuleName:where:what:extra:;
+ (void)logWithLevel:moduleName:subModuleName:where:what:extra:;
+ (void)logWithInstanceName:level:moduleName:subModuleName:linkIDs:eventType:where:what:who:extra:;
+ (void)logWithLevel:moduleName:subModuleName:linkIDs:eventType:where:what:who:extra:;
+ (id)formatMessageWithLinkIDs:eventType:where:what:who:extra:;
+ (void)logWithInstanceName:level:moduleName:subModuleName:message:;
+ (id)jsonStringFromValidDictionary:;
+ (id)convertToJSONCompatible:;
+ (id)jsonStringFromDictionary:;
@end

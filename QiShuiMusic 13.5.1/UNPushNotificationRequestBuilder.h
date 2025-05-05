@interface UNPushNotificationRequestBuilder : NSObject
- (id)_sanitizeVolume:;
- (id)_sanitizeAlert:;
- (id)_sanitizeUnsignedInteger:;
- (id)_sanitizeFlag:;
- (id)_sanitizeLocalizationArgumentsArray:;
- (id)_sanitizeAPSDictionary:;
- (id)_sanitizeTopicIdentifier:;
- (id)_sanitizeRelevanceScore:;
- (id)_sanitizeInterruptionLevelString:;
- (id)_sanitizeStringArray:;
- (unsigned long long)_interruptionLevelForString:;
- (void).cxx_destruct;
- (id)_sanitizeSound:;
- (id)initWithIdentifier:payload:bundleIdentifier:;
- (id)buildNotificationRequest;
- (id)buildSafePayload;
@end

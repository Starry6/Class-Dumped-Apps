@interface AFDictationDiscoverabilitySignalsStreamManager : NSObject
+ (void)sendSendMessageSentEventWithBundleIdentifier:context:userInfo:;
+ (void)sendDictationRequestStartedEventWithBundleIdentifier:context:userInfo:;
+ (void)sendSiriRequestStartedEventWithBundleIdentifier:context:userInfo:;
@end

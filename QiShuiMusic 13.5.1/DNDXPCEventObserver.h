@interface DNDXPCEventObserver : NSObject
+ (void)setFocusConfigurationStreamEventHandler:;
+ (void)subscribeToFocusConfigurationStreamWithIdentifier:;
+ (void)_registerEventHandler:forStream:;
+ (void)_subscribeToStream:clientIdentifier:;
+ (void)_unsubscribeFromStream:clientIdentifier:;
+ (void)unsubscribeFromFocusConfigurationStreamWithIdentifier:;
@end

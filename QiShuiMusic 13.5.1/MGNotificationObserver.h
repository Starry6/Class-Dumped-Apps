@interface MGNotificationObserver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:;
- (void)startDynaStoreMonitoringWithArgument:;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:userInfo:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)_removeBlock:;
- (void)invokeBlocks;
- (void)_cancelRegistration;
- (void)_addBlock:;
- (id)initWithType:argument:;
- (id)copyWithZone:;
@end

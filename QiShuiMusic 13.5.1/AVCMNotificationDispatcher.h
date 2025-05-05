@interface AVCMNotificationDispatcher : NSObject
@property (nonatomic) ^{opaqueCMNotificationCenter=} CMNotificationCenter;
- (id)init;
- (void)dealloc;
- (void)removeListenerWithWeakReference:callback:name:object:;
- (id)CMNotificationCenter;
- (id)_copyAndRemoveObserverForWeakReferenceToListener:callback:name:object:;
- (void)addListenerWithWeakReference:callback:name:object:flags:;
- (id)initWithCMNotificationCenter:;
+ (id)notificationDispatcherForCMNotificationCenter:;
@end

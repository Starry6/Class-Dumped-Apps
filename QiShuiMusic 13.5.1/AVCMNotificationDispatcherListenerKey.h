@interface AVCMNotificationDispatcherListenerKey : NSObject
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)initWithWeakReferenceToListener:callback:name:object:;
- (id)copyWithZone:;
+ (id)listenerKeyWithWeakReferenceToListener:callback:name:object:;
@end

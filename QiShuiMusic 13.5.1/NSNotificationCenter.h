@interface NSNotificationCenter : NSObject
@property (nonatomic) NSArray flex_observers;
- (id)flex_observers;
- (id)rac_addObserverForName:object:;
- (void)HMDP_addObserver:selector:name:object:;
- (void)HMDP_removeObserver:;
- (void)HMDP_removeObserver:name:object:;
- (void)postNotificationName:;
- (void)__mainThreadPostNotificationName:object:;
- (void)__mainThreadPostNotificationName:object:userInfo:;
- (void)__mainThreadPostNotification:;
- (void)safari_addObserver:selector:forUserDefaultKey:;
- (void)safari_removeObserver:forUserDefaultKey:;
- (id)safari_addObserverForUserDefaultKey:queue:usingBlock:;
- (void)_removeObserver:;
- (void)removeObserver:;
- (id)init;
- (BOOL)isEmpty;
- (void)dealloc;
- (void)removeObserver:name:object:;
- (id)debugDescription;
- (id)description;
- (void)postNotification:;
- (id)addObserverForName:object:queue:usingBlock:;
- (void)addObserver:selector:name:object:;
- (id)_initWithCFNotificationCenter:;
- (unsigned long long)_addObserver:selector:name:object:options:;
- (void)postNotificationName:object:;
- (void)postNotificationName:object:userInfo:;
+ (id)once:;
+ (id)uikitInternalCenter;
+ (id)uikitCenter;
+ (id)defaultCenter;
+ (id)_defaultCenterWithoutCreating;
@end

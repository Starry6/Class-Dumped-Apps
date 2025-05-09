@interface PPNotificationManager : NSObject
- (id)init;
- (void)waitOnQueueToDrain;
- (void)simulatePortraitChange;
- (void)dealloc;
- (void)addEventKitChangeBlock:forLifetimeOfObject:;
- (void)stopListening;
- (void)addMeCardChangeBlock:forLifetimeOfObject:;
- (void)addPortraitChangeBlock:forLifetimeOfObject:;
- (void)addSuggestionsChangeBlock:forLifetimeOfObject:;
- (id)addCalendarVisibilityChangeBlock:forLifetimeOfObject:;
- (void).cxx_destruct;
- (void)addPortraitInvalidationBlock:forLifetimeOfObject:;
- (void)setEKStore:;
- (void)simulatePortraitInvalidation;
- (void)_registerForEventKitChangeTrackingWithGuardedData:;
- (id)initWithQueueName:notificationCenter:;
- (void)fetchObjectChangesFromStore:usingBlock:;
- (void)addContactsChangeBlock:forLifetimeOfObject:;
+ (id)new;
+ (id)sharedInstance;
+ (void)addContactsObserverForLifetimeOfObject:block:;
+ (void)addPortraitInvalidationObserverForLifetimeOfObject:block:;
+ (void)addEventKitObserverForLifetimeOfObject:block:;
+ (void)addMeCardObserverForLifetimeOfObject:block:;
+ (void)addSuggestionsObserverForLifetimeOfObject:block:;
+ (id)addCalendarVisibilityObserverForLifetimeOfObject:block:;
+ (void)addPortraitChangeObserverForLifetimeOfObject:block:;
@end

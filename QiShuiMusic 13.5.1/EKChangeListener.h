@interface EKChangeListener : NSObject
@property (nonatomic) NSPointerArray delegates;
- (id)init;
- (id)delegates;
- (void)setDelegates:;
- (id)_orderedDelegates;
- (void)registerDelegate:;
- (void)objectsChangedNotification:;
- (void).cxx_destruct;
+ (id)changedIdentifiersForNotification:;
+ (BOOL)isSyncStatusChangeNotification:;
+ (id)updatedObjectFor:changeNotification:;
@end

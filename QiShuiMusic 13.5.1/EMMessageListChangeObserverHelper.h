@interface EMMessageListChangeObserverHelper : NSObject
+ (void)collection:notifyChangeObserversAboutChangesByItemIDs:;
+ (void)collection:notifyChangeObserversAboutChangedItemIDs:itemIDsWithCountChanges:;
@end

@interface EKNotificationCollection : EKObject
@property (nonatomic) EKSource source;
@property (nonatomic) NSSet notifications;
- (id)notifications;
- (id)initWithOptions:;
- (BOOL)validate:;
- (void)setNotifications:;
- (BOOL)save:;
- (void)setExternalID:;
- (void)addNotification:;
- (void)setExternalIDTag:;
- (id)source;
- (void)setFlags:;
- (unsigned int)flags;
- (void)setSource:;
- (void)removeNotification:;
- (void)_setNotificationsCollectionFlag;
- (BOOL)_hasNotificationsCollectionFlag;
+ (BOOL)isWeakRelationship;
+ (Class)frozenClass;
+ (id)knownRelationshipMultiValueKeys;
@end

@interface EKPersistentNotification : EKPersistentObject
- (id)calendar;
- (id)externalID;
- (void)setUUID:;
- (void)setExternalID:;
- (id)externalModificationTag;
- (int)entityType;
- (void)setExternalModificationTag:;
- (id)UUID;
- (id)hostURL;
- (void)setHostURL:;
+ (id)relations;
@end

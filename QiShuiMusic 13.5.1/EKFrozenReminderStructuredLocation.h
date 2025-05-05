@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject
@property (nonatomic) NSString uniqueIdentifier;
- (id)remObjectID;
- (id)uniqueIdentifier;
- (double)latitude;
- (id)uuid;
- (double)radius;
- (int)referenceFrame;
- (id)title;
- (id)address;
- (double)longitude;
- (id)mapKitHandle;
- (id)_structuredLocation;
- (id)initWithAlternateUniverseObject:inEventStore:withUpdatedChildObjects:;
- (id)updatedStructuredLocation;
- (id)updateParentToCommitSelf:;
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:inChangeSet:;
+ (Class)meltedClass;
+ (id)uniqueIdentifierForREMObject:;
+ (BOOL)canCommitSelf;
@end

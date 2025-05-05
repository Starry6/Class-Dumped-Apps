@interface PLCloudFeedEntry : PLManagedObject
@property (nonatomic) NSDate entryDate;
@property (nonatomic) NSNumber entryTypeNumber;
@property (nonatomic) NSNumber entryPriorityNumber;
@property (nonatomic) NSString entryAlbumGUID;
@property (nonatomic) NSString entryInvitationRecordGUID;
@property (nonatomic) NSURL URIRepresentation;
@property (nonatomic) q entryType;
@property (nonatomic) q entryPriority;
- (id)URIRepresentation;
- (long long)entryType;
- (BOOL)shouldBeRemovedFromPhotoLibrary:;
- (long long)entryPriority;
+ (id)entityName;
+ (id)entriesSortDescriptorsAscending:;
+ (id)allEntriesInLibrary:;
+ (id)notificationPredicateForFilter:;
+ (id)filterPredicateForFilter:;
+ (id)additionalPrediateForFilter:;
+ (id)entityForFilter:inManagedObjectContext:;
+ (id)recentEntriesInLibrary:earliestDate:latestDate:limit:filter:sortDescriptors:;
+ (id)_recentEntriesInLibrary:forEntity:usingPredicate:earliestDate:latestDate:limit:sortDescriptors:;
+ (id)recentAssetsEntriesInLibrary:limit:;
+ (id)firstEntryWithType:albumGUID:inLibrary:;
+ (id)allEntriesInManagedObjectContext:;
+ (id)entryWithURIRepresentation:inLibrary:;
@end

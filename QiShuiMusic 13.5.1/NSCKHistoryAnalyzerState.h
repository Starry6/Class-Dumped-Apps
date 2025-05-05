@interface NSCKHistoryAnalyzerState : NSManagedObject
@property (nonatomic) NSNumber entityId;
@property (nonatomic) NSNumber entityPK;
@property (nonatomic) NSNumber originalChangeTypeNum;
@property (nonatomic) NSNumber finalChangeTypeNum;
@property (nonatomic) NSManagedObjectID analyzedObjectID;
@property (nonatomic) NSNumber originalTransactionNumber;
@property (nonatomic) q originalChangeType;
@property (nonatomic) NSNumber finalTransactionNumber;
@property (nonatomic) q finalChangeType;
@property (nonatomic) NSDictionary tombstone;
@property (nonatomic) NSString finalChangeAuthor;
- (void)mergeWithState:;
- (void)updateWithChange:;
- (id)tombstone;
- (long long)originalChangeType;
- (long long)finalChangeType;
- (id)analyzedObjectID;
+ (id)entityPath;
@end

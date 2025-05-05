@interface PFHistoryAnalyzerDefaultObjectState : NSObject
@property (nonatomic) NSManagedObjectID analyzedObjectID;
@property (nonatomic) NSNumber originalTransactionNumber;
@property (nonatomic) q originalChangeType;
@property (nonatomic) NSNumber finalTransactionNumber;
@property (nonatomic) q finalChangeType;
@property (nonatomic) NSDictionary tombstone;
@property (nonatomic) NSString finalChangeAuthor;
- (void)dealloc;
- (id)finalChangeAuthor;
- (void)updateWithChange:;
- (id)tombstone;
- (id)finalTransactionNumber;
- (long long)originalChangeType;
- (long long)finalChangeType;
- (id)description;
- (id)analyzedObjectID;
- (id)initWithOriginalChange:;
- (id)originalTransactionNumber;
@end

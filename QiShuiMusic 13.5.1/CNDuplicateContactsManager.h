@interface CNDuplicateContactsManager : NSObject
@property (nonatomic) NSArray duplicates;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContactStore:;
- (BOOL)applyMergeResultToSaveRequest:;
- (id)duplicates;
+ (void)updateRecentImagesDatabaseForSignatures:;
+ (void)refreshManagedDuplicatesWithCompletionHandler:;
+ (void)duplicatesCountsWithCompletionHandler:;
+ (BOOL)applyMergeResultToSaveRequest:signatures:;
@end

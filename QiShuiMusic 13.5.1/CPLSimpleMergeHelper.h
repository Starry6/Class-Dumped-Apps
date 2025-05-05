@interface CPLSimpleMergeHelper : NSObject
@property (nonatomic) CPLEngineStore store;
- (id)initWithEngineStore:;
- (void).cxx_destruct;
- (BOOL)_changeCanConflict:;
- (id)mergerForBatch:error:;
- (id)store;
+ (id)_mergerWithConflictsForStore:conflictingScopeIdentifiers:;
+ (id)_mergerWithNoConflictsForStore:;
@end

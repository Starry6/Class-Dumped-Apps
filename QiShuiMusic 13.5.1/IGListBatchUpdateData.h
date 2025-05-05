@interface IGListBatchUpdateData : NSObject
@property (nonatomic) NSIndexSet insertSections;
@property (nonatomic) NSIndexSet deleteSections;
@property (nonatomic) NSSet moveSections;
@property (nonatomic) NSArray insertIndexPaths;
@property (nonatomic) NSArray deleteIndexPaths;
@property (nonatomic) NSArray moveIndexPaths;
- (id)debugDescriptionLines;
- (id)deleteSections;
- (id)initWithInsertSections:deleteSections:moveSections:insertIndexPaths:deleteIndexPaths:moveIndexPaths:;
- (id)insertSections;
- (id)moveIndexPaths;
- (id)moveSections;
- (void).cxx_destruct;
- (id)description;
- (id)deleteIndexPaths;
- (id)insertIndexPaths;
+ (void)_cleanIndexPathsWithMap:moves:indexPaths:deletes:inserts:;
@end

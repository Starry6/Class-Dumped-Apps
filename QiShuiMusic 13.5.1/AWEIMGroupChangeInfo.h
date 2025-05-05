@interface AWEIMGroupChangeInfo : NSObject
@property (nonatomic) NSMutableArray updateIndexPaths;
@property (nonatomic) NSMutableArray insertIndexPaths;
@property (nonatomic) NSMutableArray deleteIndexPaths;
@property (nonatomic) NSMutableIndexSet updateSections;
@property (nonatomic) NSMutableIndexSet insertSections;
@property (nonatomic) NSMutableIndexSet deleteSections;
- (id)deleteSections;
- (id)insertSections;
- (void)setDeleteSections:;
- (void)setInsertSections:;
- (void)setUpdateIndexPaths:;
- (void)setUpdateSections:;
- (id)updateIndexPaths;
- (id)updateSections;
- (id)init;
- (void).cxx_destruct;
- (id)deleteIndexPaths;
- (void)setDeleteIndexPaths:;
- (id)insertIndexPaths;
- (void)setInsertIndexPaths:;
@end

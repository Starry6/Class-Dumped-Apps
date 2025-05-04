@interface AWEIMGroupChangeInfo : NSObject
@property (nonatomic) NSMutableArray updateIndexPaths;
@property (nonatomic) NSMutableArray insertIndexPaths;
@property (nonatomic) NSMutableArray deleteIndexPaths;
@property (nonatomic) NSMutableIndexSet updateSections;
@property (nonatomic) NSMutableIndexSet insertSections;
@property (nonatomic) NSMutableIndexSet deleteSections;
- (id)deleteSections;
- (id)insertSections;
- (id)updateIndexPaths;
- (void)setUpdateIndexPaths:;
- (id)updateSections;
- (void)setUpdateSections:;
- (void)setInsertSections:;
- (void)setDeleteSections:;
- (id)init;
- (void).cxx_destruct;
- (id)deleteIndexPaths;
- (id)insertIndexPaths;
- (void)setDeleteIndexPaths:;
- (void)setInsertIndexPaths:;
@end

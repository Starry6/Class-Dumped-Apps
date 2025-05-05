@interface PFUbiquityMergeConflict : NSMergeConflict
@property (nonatomic) NSDictionary ancestorSnapshot;
- (void)dealloc;
- (id)initWithSource:newVersion:oldVersion:cachedSnapshot:persistedSnapshot:;
- (id)ancestorSnapshot;
- (void)setAncestorSnapshot:;
@end

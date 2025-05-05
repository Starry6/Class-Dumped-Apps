@interface EMUbiquitouslyPersistedDictionaryMergeResult : NSObject
@property (nonatomic) NSDictionary changedItems;
@property (nonatomic) NSArray deletedItems;
@property (nonatomic) BOOL requiresSynchronizing;
- (void).cxx_destruct;
- (id)changedItems;
- (id)deletedItems;
- (id)initWithChangedItems:deletedItems:requiresSynchronizing:;
- (BOOL)requiresSynchronizing;
@end

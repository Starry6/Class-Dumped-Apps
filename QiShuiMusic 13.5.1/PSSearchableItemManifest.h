@interface PSSearchableItemManifest : NSObject
@property (nonatomic) NSMutableArray searchableItems;
- (id)init;
- (id)items;
- (id)searchableItems;
- (void).cxx_destruct;
- (void)setSearchableItems:;
- (void)addSearchableItems:;
- (void)addSearchableItem:;
- (void)removeSearchableItem:;
- (BOOL)writeToPlistAndStringsFilesAtURL:error:;
- (id)_stringKeyForString:;
- (id)_escapedStringForString:;
@end

@interface FPStitchingManager : NSObject
@property (nonatomic) NSDictionary allPlaceholderItemsByParentIdentifierAndName;
@property (nonatomic) NSArray allPlaceholderReplacementsIDs;
@property (nonatomic) NSDictionary stitchedFieldsAndItemsByItemIDs;
@property (nonatomic) NSMutableArray allDeletedIDs;
- (id)init;
- (void).cxx_destruct;
- (void)registerStitchingSession:;
- (void)addBouncedItem:;
- (void)removeBouncedItemsWithIDs:;
- (id)allPlaceholderItemsByParentIdentifierAndName;
- (id)allPlaceholderReplacementsIDs;
- (id)allDeletedIDs;
- (BOOL)cleanStitchedForItemID:ignoreSession:;
- (id)stitchedFieldsAndItemsByItemIDs;
- (id)stitchedItemsForParentID:;
+ (id)sharedInstance;
+ (id)parentIdNameKeyForItem:;
@end

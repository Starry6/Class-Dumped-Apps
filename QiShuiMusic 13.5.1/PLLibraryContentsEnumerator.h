@interface PLLibraryContentsEnumerator : NSObject
@property (nonatomic) NSManagedObjectContext sourceContext;
@property (nonatomic) BOOL concurrent;
- (BOOL)concurrent;
- (void).cxx_destruct;
- (BOOL)processObjectsWithError:;
- (id)sourceContext;
- (id)initWithSourceManagedObjectContext:concurrent:;
- (void)addAssetVisitor:;
- (void)addAlbumVisitor:;
- (void)addResourceVisitor:;
- (void)addConversationVisitor:;
- (void)addFaceVisitor:;
- (void)addEndOfListVisitor:;
- (id)_setupAssetResourceFaceController;
- (id)_setupAlbumController;
- (id)_setupConversationController;
@end

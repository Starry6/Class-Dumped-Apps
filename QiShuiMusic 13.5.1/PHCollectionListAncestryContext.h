@interface PHCollectionListAncestryContext : NSObject
@property (nonatomic) <NSFastEnumeration> allCollectionLists;
@property (nonatomic) NSMutableDictionary collectionListsByOID;
- (void).cxx_destruct;
- (id)initWithCollectionLists:;
- (id)folderForID:;
- (id)allCollectionLists;
- (void)setAllCollectionLists:;
- (id)collectionListsByOID;
- (void)setCollectionListsByOID:;
@end

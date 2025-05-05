@interface UAPasteboardGeneration : NSObject
@property (nonatomic) NSSet allTypes;
@property (nonatomic) NSArray items;
@property (nonatomic) NSMutableDictionary typePaths;
@property (nonatomic) Q generation;
- (BOOL)addItem:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)allTypes;
- (unsigned long long)generation;
- (id)initWithGeneration:;
- (id)getTypePaths;
- (BOOL)addType:toItemAtIndex:;
- (void)fetchTypeURL:;
- (void)setAllTypes:;
- (id)typePaths;
- (void)setTypePaths:;
@end

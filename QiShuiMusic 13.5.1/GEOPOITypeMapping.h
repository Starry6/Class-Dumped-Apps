@interface GEOPOITypeMapping : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)typeToCategoryMapping;
- (id)alwaysVisibleTypes;
- (id)parseVisiblePOITypesJSON:;
- (id)typesForPOICategories:;
- (void)parsePOICategoriesJSON:;
- (id)initWithResourceManifestManager:resourceManager:;
- (void)resourceManifestManagerWillChangeActiveTileGroup:;
- (void)_tearDown;
- (BOOL)parseCategoryMappingJSON:categoryToPOIType:POITypeToCategory:;
- (void)clearCachedValues;
- (void).cxx_destruct;
- (void)loadPOICategoriesJSON;
- (void)resourceManifestManagerDidChangeActiveTileGroup:;
- (BOOL)isAlwaysVisiblePOIType:;
- (id)categoryToTypeMapping;
- (id)categoryForPOIType:;
+ (id)sharedMapping;
@end

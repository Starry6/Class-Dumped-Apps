@interface MPMediaLibraryEntityTranslationContext : NSObject
@property (nonatomic) MPMediaLibrary mediaLibrary;
@property (nonatomic) NSArray allowedEntityIdentifiers;
@property (nonatomic) NSArray scopedContainers;
@property (nonatomic) BOOL multiQuery;
@property (nonatomic) Q filteringOptions;
@property (nonatomic) MPModelKind modelKind;
@property (nonatomic) NSString personID;
@property (nonatomic) NSString filterText;
@property (nonatomic) NSArray propertyFilters;
- (id)mediaLibrary;
- (id)modelKind;
- (void)setMediaLibrary:;
- (id)scopedContainers;
- (id)personID;
- (void)setPersonID:;
- (id)propertyFilters;
- (unsigned long long)filteringOptions;
- (id)allowedEntityIdentifiers;
- (id)filterText;
- (void).cxx_destruct;
- (void)setMultiQuery:;
- (void)setModelKind:;
- (void)setPropertyFilters:;
- (void)setScopedContainers:;
- (void)setFilteringOptions:;
- (void)setFilterText:;
- (BOOL)isMultiQuery;
- (void)setAllowedEntityIdentifiers:;
- (id)copyWithZone:;
@end

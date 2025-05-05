@interface GEOPOICategoryFilter : NSObject
@property (nonatomic) NSArray categoriesToInclude;
@property (nonatomic) NSArray categoriesToExclude;
- (BOOL)shouldDisplayPOIWithType:;
- (id)categoriesToInclude;
- (void)applyFilterToPlaceParameters:;
- (BOOL)applyToAutocompleteParameters:error:;
- (void).cxx_destruct;
- (id)categoriesToExclude;
- (BOOL)applyToSearchParameters:error:;
- (id)initWithCategoriesToInclude:categoriesToExclude:;
+ (id)filterIncludingAllCategories;
+ (id)filterExcludingAllCategories;
@end

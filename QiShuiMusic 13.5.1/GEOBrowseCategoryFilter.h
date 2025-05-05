@interface GEOBrowseCategoryFilter : NSObject
- (id)init;
- (id)initWithCategory:;
- (BOOL)applyToAutocompleteParameters:error:;
- (void).cxx_destruct;
- (BOOL)applyToSearchParameters:error:;
@end

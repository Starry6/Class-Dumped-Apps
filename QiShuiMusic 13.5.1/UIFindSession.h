@interface UIFindSession : NSObject
@property (nonatomic) NSString searchText;
@property (nonatomic) NSString replacementText;
@property (nonatomic) UITextSearchOptions configuredSearchOptions;
@property (nonatomic) UIFindInteraction parentInteraction;
@property (nonatomic) UIResponder searchableResponder;
@property (nonatomic) UIView searchableResponderAsView;
@property (nonatomic) UIResponder divergentResponder;
@property (nonatomic) q resultCount;
@property (nonatomic) q highlightedResultIndex;
@property (nonatomic) q searchResultDisplayStyle;
@property (nonatomic) BOOL supportsReplacement;
@property (nonatomic) BOOL allowsReplacementForCurrentlyHighlightedResult;
@property (nonatomic) BOOL allowsReplacement;
- (long long)resultCount;
- (id)replacementText;
- (void)setReplacementText:;
- (void).cxx_destruct;
- (id)searchText;
- (void)setSearchText:;
- (long long)searchResultDisplayStyle;
- (BOOL)supportsReplacement;
- (BOOL)allowsReplacementForCurrentlyHighlightedResult;
- (void)highlightNextResultInDirection:;
- (long long)highlightedResultIndex;
- (void)performSearchWithQuery:options:;
- (void)performSingleReplacementWithSearchQuery:replacementString:options:;
- (void)replaceAllInstancesOfSearchQuery:withReplacementString:options:;
- (void)invalidateFoundResults;
- (id)parentInteraction;
- (void)setParentInteraction:;
- (id)configuredSearchOptions;
- (id)searchableResponderAsView;
- (id)divergentResponder;
- (void)setSearchResultDisplayStyle:;
- (BOOL)allowsReplacement;
- (void)setConfiguredSearchOptions:;
- (id)searchableResponder;
- (void)setSearchableResponder:;
@end

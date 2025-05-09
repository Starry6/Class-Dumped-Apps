@interface FLEXKeyPathSearchController : NSObject
@property (nonatomic) <FLEXKeyPathSearchControllerDelegate> delegate;
@property (nonatomic) NSTimer timer;
@property (nonatomic) NSArray bundlesOrClasses;
@property (nonatomic) FLEXRuntimeKeyPath keyPath;
@property (nonatomic) NSString emptySuggestion;
@property (nonatomic) NSArray classes;
@property (nonatomic) NSArray filteredClasses;
@property (nonatomic) NSArray classesToMethods;
@property (nonatomic) FLEXRuntimeBrowserToolbar toolbar;
@property (nonatomic) NSArray suggestions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scrollViewDidScroll:;
- (void)setToolbar:;
- (id)classesOf:;
- (void)didSelectKeyPathOption:;
- (void)didSelectAbsoluteClass:;
- (void)didPressButton:insertInto:;
- (id)suggestions;
- (void)updateTable;
- (void)updateToolbarButtons;
- (void)setNonEmptyMethodLists:withClasses:;
- (BOOL)searchBar:shouldChangeTextInRange:replacementText:;
- (void)searchBar:textDidChange:;
- (void)searchBarCancelButtonClicked:;
- (void)searchBarTextDidBeginEditing:;
- (void)searchBarSearchButtonClicked:;
- (long long)tableView:numberOfRowsInSection:;
- (id)tableView:cellForRowAtIndexPath:;
- (id)tableView:titleForHeaderInSection:;
- (double)tableView:heightForHeaderInSection:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)tableView:accessoryButtonTappedForRowWithIndexPath:;
- (id)toolbar;
- (id)delegate;
- (id)timer;
- (void)setTimer:;
- (id)bundlesOrClasses;
- (void)setBundlesOrClasses:;
- (id)keyPath;
- (void)setKeyPath:;
- (id)emptySuggestion;
- (id)classes;
- (void)setClasses:;
- (id)filteredClasses;
- (void)setFilteredClasses:;
- (id)classesToMethods;
- (void)setClassesToMethods:;
- (void).cxx_destruct;
+ (id)delegate:;
@end

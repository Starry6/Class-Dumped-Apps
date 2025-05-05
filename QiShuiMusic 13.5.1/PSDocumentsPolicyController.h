@interface PSDocumentsPolicyController : PSListController
@property (nonatomic) PSSpecifier groupSpecifier;
@property (nonatomic) DOCDocumentSource selectedDocumentSource;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) DOCSourceSearchingContext searchingContext;
@property (nonatomic) BOOL isFirstSourceResults;
- (id)specifiers;
- (id)bundleIdentifier;
- (void)dealloc;
- (void)setBundleIdentifier:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (id)groupSpecifier;
- (void)updateRadioGroupWithSources:animated:;
- (void)updateFooterAnimated:;
- (id)documentSource;
- (void)setDocumentSource:;
- (void)setGroupSpecifier:;
- (id)selectedDocumentSource;
- (void)setSelectedDocumentSource:;
- (id)searchingContext;
- (void)setSearchingContext:;
- (BOOL)isFirstSourceResults;
- (void)setIsFirstSourceResults:;
@end

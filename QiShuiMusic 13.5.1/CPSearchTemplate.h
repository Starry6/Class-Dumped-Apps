@interface CPSearchTemplate : CPTemplate
@property (nonatomic) NSArray listItems;
@property (nonatomic) NAFuture templateProviderFuture;
@property (nonatomic) <CPSearchTemplateDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setTrailingNavigationBarButtons:;
- (id)listItems;
- (void)setListItems:;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:;
- (id)trailingNavigationBarButtons;
- (void)searchTemplateWithIdentifier:updateSearchResultsForSearchText:completionResults:;
- (void)searchTemplateWithIdentifier:selectedResultWithIdentifier:completionHandler:;
- (void)searchTemplateSearchButtonPressedWithIdentifier:;
@end

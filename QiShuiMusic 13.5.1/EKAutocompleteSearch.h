@interface EKAutocompleteSearch : NSObject
@property (nonatomic) Q maximumResultCount;
- (unsigned long long)maximumResultCount;
- (void)setMaximumResultCount:;
+ (id)searchWithEventStore:searchString:maximumResultCount:ignoreScheduledEvents:initialEvent:pasteboardItemProvider:completionHandler:;
@end

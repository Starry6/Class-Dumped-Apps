@interface PDFTextSearchAggregator : NSObject
@property (nonatomic) NSString searchString;
@property (nonatomic) <UITextSearchAggregator> aggregator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aggregator;
- (id)searchString;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)cancelFind;
- (void)foundResults:forPage:;
- (void)foundResults:forDocument:;
- (id)initWithSearchString:aggregator:;
@end

@interface VKCVisualSearchResult : NSObject
@property (nonatomic) MADVIVisualSearchGatingResult gatingResult;
@property (nonatomic) MADVIVisualSearchResult searchResult;
@property (nonatomic) NSData payload;
@property (nonatomic) NSData userFeedbackPayload;
@property (nonatomic) NSArray resultItems;
- (id)payload;
- (id)searchResult;
- (id)resultItems;
- (void).cxx_destruct;
- (id)description;
- (void)setSearchResult:;
- (id)userFeedbackPayload;
- (id)initWithGatingResult:;
- (id)gatingResult;
- (void)setGatingResult:;
@end

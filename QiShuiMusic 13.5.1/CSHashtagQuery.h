@interface CSHashtagQuery : CSSearchQuery
@property (nonatomic) @? hashTagCompletionHandler;
- (void)setHashTagCompletionHandler:;
- (void).cxx_destruct;
- (id)hashTagCompletionHandler;
- (id)initWithQueryString:bundleIDs:;
- (void)handleCompletion:;
- (id)initWithQueryString:context:;
- (void)handleFoundAttributes:values:attributesHandler:;
@end

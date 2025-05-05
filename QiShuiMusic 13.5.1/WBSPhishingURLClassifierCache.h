@interface WBSPhishingURLClassifierCache : NSObject
@property (nonatomic) <WBSPhishingURLClassifier> urlClassifier;
- (void)clearCache;
- (void).cxx_destruct;
- (void)classifyURL:options:completionHandler:;
- (id)urlClassifier;
- (id)initWithURLClassifier:;
- (void)cacheClassification:forURL:;
@end

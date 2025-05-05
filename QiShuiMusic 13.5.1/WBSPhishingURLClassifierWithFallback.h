@interface WBSPhishingURLClassifierWithFallback : NSObject
@property (nonatomic) <WBSPhishingURLClassifier> urlClassifier;
@property (nonatomic) <WBSPhishingURLClassifier> fallbackClassifier;
- (void).cxx_destruct;
- (void)classifyURL:options:completionHandler:;
- (id)initWithURLClassifier:fallback:;
- (id)urlClassifier;
- (id)fallbackClassifier;
+ (id)buildChain:;
@end

@interface NLTaggerAssetRequest : NSObject
- (void)completeWithResult:error:;
- (BOOL)isFulfilled;
- (void).cxx_destruct;
- (id)initWithLanguage:tagScheme:completionHandler:;
- (void)waitForFulfillment;
+ (void)checkAssetRequests;
@end

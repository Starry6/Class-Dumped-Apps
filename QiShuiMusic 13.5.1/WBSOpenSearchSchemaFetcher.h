@interface WBSOpenSearchSchemaFetcher : NSObject
- (void).cxx_destruct;
- (void)fetchOpenSearchDescriptionWithURL:;
- (void)_didFinishFetchingOpenSearchDescriptionDocumentWithURL:;
+ (id)sharedFetcher;
@end

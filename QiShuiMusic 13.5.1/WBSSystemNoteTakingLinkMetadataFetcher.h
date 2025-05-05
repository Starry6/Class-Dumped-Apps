@interface WBSSystemNoteTakingLinkMetadataFetcher : NSObject
- (void)fetchMetadataForWebView:completion:;
- (id)linkContextPreviewForMetadata:image:selectedText:;
+ (id)sharedFetcher;
@end

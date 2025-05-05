@interface QLThumbnailGenerationQueue : NSObject
@property (nonatomic) NSMutableDictionary queuedURLs;
@property (nonatomic) NSOperationQueue queue;
- (id)init;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:atBackgroundPriority:completionHandler:;
- (void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:;
- (id)queuedURLs;
- (void)setQueuedURLs:;
+ (id)sharedInstance;
@end

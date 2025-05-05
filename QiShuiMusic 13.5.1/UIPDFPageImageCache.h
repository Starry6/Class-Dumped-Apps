@interface UIPDFPageImageCache : NSObject
@property (nonatomic) UIPDFDocument document;
@property (nonatomic) Q pageCount;
@property (nonatomic) Q lookAhead;
@property (nonatomic) double lookAheadResolution;
- (void)clearCache;
- (void)dealloc;
- (unsigned long long)pageCount;
- (void)didReceiveMemoryWarning:;
- (id)document;
- (id)initWithDocument:;
- (unsigned long long)lookAhead;
- (id)initWithDocument:cacheCount:lookAhead:withLookAheadResolution:;
- (void)addRenderJob:;
- (void)cacheImageOfPage:maxSize:;
- (void)deliverImageOfPage:maxSize:quality:receiver:selector:info:;
- (id)getImageIfAvailableForPage:;
- (void)cancelPendingRenderOperations;
- (void)cancelPendingRenderOperationsForTarget:;
- (int)getRenderQueueJobsCount;
- (double)lookAheadResolution;
@end

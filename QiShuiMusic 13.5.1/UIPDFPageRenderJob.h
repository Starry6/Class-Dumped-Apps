@interface UIPDFPageRenderJob : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) UIPDFPageRenderOperation operation;
@property (nonatomic) Q pageIndex;
@property (nonatomic) q priority;
@property (nonatomic) BOOL releaseWhenDone;
@property (nonatomic) {CGSize=dd} size;
- (id)operation;
- (void)cancel;
- (void)dealloc;
- (void)setOperation:;
- (void)cancelOperation;
- (unsigned long long)pageIndex;
- (id)image;
- (id)size;
- (long long)priority;
- (void)sendImage;
- (BOOL)hasPage;
- (id)initWithPage:maxSize:queuePriority:;
- (void)cancelOperationForTarget:;
- (void)setTarget:callback:userData:;
- (void)releaseOperation;
- (void)renderImage;
- (void)sendImageTo:callback:userData:;
- (BOOL)releaseWhenDone;
- (void)setReleaseWhenDone:;
@end

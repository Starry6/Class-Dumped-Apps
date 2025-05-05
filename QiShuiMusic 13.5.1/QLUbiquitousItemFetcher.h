@interface QLUbiquitousItemFetcher : QLItemFetcher
@property (nonatomic) NSURL fileURL;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)itemSize;
- (void).cxx_destruct;
- (id)fileURL;
- (id)newItemProvider;
- (void)fetchContentWithAllowedOutputClasses:inQueue:updateBlock:completionBlock:;
- (BOOL)isLongFetchOperation;
- (BOOL)canBeCanceled;
- (id)shareableItem;
- (id)fetchedContent;
- (void)cancelFetch;
- (id)initWithSandboxingURLWrapper:shouldZipPackageIfNeeded:;
- (id)initWithZippingPackageIfNeeded:;
- (id)initWithURL:shouldZipPackageIfNeeded:;
- (void)subscribeToPreviewItemProgress;
- (void)_removeUpdateBlockIfNeeded:;
- (id)_createURLForPackageIfNeeded;
- (void)_deleteTempraryZipPackageFileIfNeeded;
+ (BOOL)supportsSecureCoding;
@end

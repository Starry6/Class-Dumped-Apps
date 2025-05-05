@interface QLDataFetcher : QLItemFetcher
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)itemSize;
- (void).cxx_destruct;
- (id)newItemProvider;
- (void)fetchContentWithAllowedOutputClasses:inQueue:updateBlock:completionBlock:;
- (id)shareableItem;
- (id)fetchedContent;
- (id)initWithItem:contentType:;
- (id)initWithData:contentType:previewItemTitle:;
- (id)_createTemporaryFileIfNeeded;
- (void)_deleteTempraryFileIfNeeded;
- (id)_temporaryFilename;
- (void)prepareShareableItem:;
- (void)loadDataIfNeeded;
+ (BOOL)supportsSecureCoding;
@end

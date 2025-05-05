@interface QLCacheFileProviderVersionedFileIdentifier : QLCacheVersionedFileIdentifier
@property (nonatomic) QLCacheFileProviderFileIdentifier fileIdentifier;
- (id)initWithThumbnailRequest:;
- (id)initWithFileIdentifier:version:;
@end

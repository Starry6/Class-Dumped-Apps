@interface QLCacheBasicVersionedFileIdentifier : QLCacheVersionedFileIdentifier
@property (nonatomic) QLCacheBasicFileIdentifier fileIdentifier;
- (id)initWithThumbnailRequest:;
- (id)initWithFileIdentifier:version:;
@end

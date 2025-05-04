@interface AWEImageAlbumEditAssetsExportOutputData : NSObject
@property (nonatomic) NSArray originalImages;
@property (nonatomic) NSArray compressedFramsImages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)originalImages;
- (id)compressedFramsImages;
- (void)setOriginalImages:;
- (void)setCompressedFramsImages:;
- (void)filtrationValidImageInfoIfNeed;
- (id)downloadTrackInfo;
- (void).cxx_destruct;
@end

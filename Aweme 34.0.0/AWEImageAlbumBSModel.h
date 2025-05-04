@interface AWEImageAlbumBSModel : MTLModel
@property (nonatomic) NSString uri;
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSArray downloadURLList;
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) AWECodeGenCompressedUrlListModel compressedUrlListModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)compressedUrlListModel;
- (id)downloadURLList;
- (void)setDownloadURLList:;
- (void)setHeight:;
- (void)setWidth:;
- (id)uri;
- (long long)width;
- (void)setUri:;
- (void).cxx_destruct;
- (long long)height;
- (id)urlList;
- (void)setUrlList:;
+ (id)JSONKeyPathsByPropertyKey;
@end

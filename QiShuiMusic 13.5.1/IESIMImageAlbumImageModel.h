@interface IESIMImageAlbumImageModel : IESIMBaseApiModel
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) NSString uri;
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSArray downloadURLList;
- (id)downloadURLList;
- (id)urlList;
- (void)setDownloadURLList:;
- (void)setUrlList:;
- (id)uri;
- (void)setWidth:;
- (long long)height;
- (long long)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setUri:;
+ (id)JSONKeyPathsByPropertyKey;
@end

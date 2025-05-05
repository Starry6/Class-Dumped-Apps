@interface AMapDownloadRequestReformer : AMapRequestReformer
@property (nonatomic) NSString urlString;
@property (nonatomic) q existedDataLength;
@property (nonatomic) NSString userAgent;
- (long long)existedDataLength;
- (id)initReformerWithURLString:existedDataLength:;
- (void)setExistedDataLength:;
- (id)urlString;
- (id)userAgent;
- (void)setUserAgent:;
- (id)url;
- (id)HTTPHeaders;
- (void).cxx_destruct;
- (void)setUrlString:;
@end

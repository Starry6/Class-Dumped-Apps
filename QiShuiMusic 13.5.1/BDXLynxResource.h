@interface BDXLynxResource : NSObject
@property (nonatomic) NSString channelName;
@property (nonatomic) NSString bundleName;
@property (nonatomic) Q version;
@property (nonatomic) q sourceFrom;
@property (nonatomic) NSString originSourceURL;
@property (nonatomic) NSString localPath;
@property (nonatomic) NSData resData;
@property (nonatomic) BDXResourceLoaderMetricModel metricInfo;
@property (nonatomic) BOOL isGeckoUpdate;
@property (nonatomic) double downloadResourceStart;
@property (nonatomic) double downloadResourceEnd;
@property (nonatomic) double readTemplateLocalStart;
@property (nonatomic) double readTemplateLocalEnd;
@property (nonatomic) NSString resFrom;
@property (nonatomic) UIImage resourceImage;
@property (nonatomic) BOOL isFromMemory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resData;
- (id)originSourceURL;
- (id)resFrom;
- (id)cdnUrl;
- (double)downloadResourceEnd;
- (double)downloadResourceStart;
- (BOOL)isGeckoUpdate;
- (double)readTemplateLocalEnd;
- (double)readTemplateLocalStart;
- (void)setDownloadResourceEnd:;
- (void)setDownloadResourceStart:;
- (void)setIsGeckoUpdate:;
- (void)setOriginSourceURL:;
- (void)setReadTemplateLocalEnd:;
- (void)setReadTemplateLocalStart:;
- (void)setResData:;
- (void)setResFrom:;
- (void)setSourceFrom:;
- (long long)sourceFrom;
- (id)channel;
- (void)setVersion:;
- (unsigned long long)version;
- (long long)resourceType;
- (void)setMetricInfo:;
- (id)bundle;
- (id)channelName;
- (void)setBundleName:;
- (void).cxx_destruct;
- (id)resourceData;
- (id)bundleName;
- (id)metricInfo;
- (id)sourceUrl;
- (id)accessKey;
- (id)localPath;
- (id)absolutePath;
- (void)setChannelName:;
- (void)setResourceImage:;
- (id)resourceImage;
- (void)setLocalPath:;
+ (id)resourceWithURL:;
@end

@interface IESGurdLoadResourcesParams : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString resourcePath;
@property (nonatomic) NSString SDKVersion;
@property (nonatomic) NSDictionary customParams;
@property (nonatomic) q downloadPriority;
@property (nonatomic) q options;
- (id)customParams;
- (void)setCustomParams:;
- (id)toFetchParams;
- (void)setOptions:;
- (void)setChannel:;
- (id)channel;
- (long long)downloadPriority;
- (id)SDKVersion;
- (long long)options;
- (void).cxx_destruct;
- (void)setDownloadPriority:;
- (id)resourcePath;
- (void)setSDKVersion:;
- (id)accessKey;
- (void)setAccessKey:;
- (void)setResourcePath:;
@end

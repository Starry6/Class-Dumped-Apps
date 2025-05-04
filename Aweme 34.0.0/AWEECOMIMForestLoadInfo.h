@interface AWEECOMIMForestLoadInfo : NSObject
@property (nonatomic) NSString loadFrom;
@property (nonatomic) Q geckoVersion;
@property (nonatomic) NSString url;
@property (nonatomic) NSString fetcherNames;
- (unsigned long long)geckoVersion;
- (void)setGeckoVersion:;
- (id)fetcherNames;
- (void)setFetcherNames:;
- (id)loadFrom;
- (void)setLoadFrom:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)url;
@end

@interface IESECSliceXResourceLoadInfo : NSObject
@property (nonatomic) Q loadFrom;
@property (nonatomic) Q geckoVersion;
@property (nonatomic) NSString fetcherNames;
- (id)fetcherNames;
- (unsigned long long)geckoVersion;
- (id)initWithLoadFrom:geckoVersion:fetcherNames:;
- (unsigned long long)loadFrom;
- (void)setFetcherNames:;
- (void)setGeckoVersion:;
- (void)setLoadFrom:;
- (void).cxx_destruct;
@end

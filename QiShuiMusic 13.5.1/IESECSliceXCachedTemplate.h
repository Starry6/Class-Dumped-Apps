@interface IESECSliceXCachedTemplate : NSObject
@property (nonatomic) IESECSliceXTemplatePackage templatePackage;
@property (nonatomic) Q geckoVersion;
@property (nonatomic) NSString fetcherNames;
- (id)templatePackage;
- (id)fetcherNames;
- (unsigned long long)geckoVersion;
- (id)initWithPackage:geckoVersion:fetcherNames:;
- (void)setFetcherNames:;
- (void)setGeckoVersion:;
- (void)setTemplatePackage:;
- (void).cxx_destruct;
@end

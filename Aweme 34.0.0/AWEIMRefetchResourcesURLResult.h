@interface AWEIMRefetchResourcesURLResult : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSString uri;
@property (nonatomic) NSString originalUrl;
@property (nonatomic) Q resourcesType;
@property (nonatomic) Q formatType;
@property (nonatomic) NSArray urlList;
- (void)setResourcesType:;
- (unsigned long long)resourcesType;
- (void)setError:;
- (id)uri;
- (void)setUri:;
- (void).cxx_destruct;
- (id)error;
- (id)originalUrl;
- (void)setOriginalUrl:;
- (unsigned long long)formatType;
- (void)setFormatType:;
- (id)urlList;
- (void)setUrlList:;
@end

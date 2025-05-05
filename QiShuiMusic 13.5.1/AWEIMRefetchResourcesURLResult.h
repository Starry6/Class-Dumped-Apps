@interface AWEIMRefetchResourcesURLResult : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSString uri;
@property (nonatomic) NSString originalUrl;
@property (nonatomic) Q resourcesType;
@property (nonatomic) Q formatType;
@property (nonatomic) NSArray urlList;
- (id)urlList;
- (unsigned long long)resourcesType;
- (void)setResourcesType:;
- (void)setUrlList:;
- (id)uri;
- (id)originalUrl;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (void)setUri:;
- (void)setOriginalUrl:;
- (unsigned long long)formatType;
- (void)setFormatType:;
@end

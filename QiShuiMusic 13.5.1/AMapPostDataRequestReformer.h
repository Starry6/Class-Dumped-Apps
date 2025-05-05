@interface AMapPostDataRequestReformer : AMapRESTRequestReformer
@property (nonatomic) NSString key;
@property (nonatomic) AMapAuthData authData;
- (id)assembledURL:;
- (id)v6Url;
- (id)url;
- (id)method;
- (id)key;
- (void)setKey:;
- (id)parameters;
- (void).cxx_destruct;
- (id)postData;
- (id)authData;
- (void)setAuthData:;
@end

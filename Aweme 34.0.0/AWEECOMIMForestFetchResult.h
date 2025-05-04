@interface AWEECOMIMForestFetchResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSData data;
@property (nonatomic) NSError error;
@property (nonatomic) AWEECOMIMForestLoadInfo loadInfo;
- (id)loadInfo;
- (void)setLoadInfo:;
- (void)setError:;
- (void)setSuccess:;
- (void)setData:;
- (void).cxx_destruct;
- (id)error;
- (id)data;
- (BOOL)success;
@end

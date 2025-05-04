@interface AWECommerceSimilarAdModel : MTLModel
@property (nonatomic) NSString message;
@property (nonatomic) q code;
@property (nonatomic) NSDictionary data;
@property (nonatomic) double asyncGetAdTs;
@property (nonatomic) BOOL isShowingSimilarAd;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)asyncGetAdTs;
- (void)setAsyncGetAdTs:;
- (BOOL)isShowingSimilarAd;
- (void)setIsShowingSimilarAd:;
- (long long)code;
- (id)message;
- (void)setCode:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setMessage:;
+ (BOOL)automaticallyDefaultMapping;
@end

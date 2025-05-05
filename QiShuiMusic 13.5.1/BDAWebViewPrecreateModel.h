@interface BDAWebViewPrecreateModel : NSObject
@property (nonatomic) NSString urlString;
@property (nonatomic) NSString adID;
@property (nonatomic) NSString logExtra;
@property (nonatomic) q precreatePolicy;
@property (nonatomic) q timeout;
@property (nonatomic) NSDictionary adExtraData;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSString skanParameters;
- (long long)precreatePolicy;
- (void)setAdExtraData:;
- (id)adExtraData;
- (id)adID;
- (id)logExtra;
- (void)setAdID:;
- (void)setLogExtra:;
- (void)setPrecreatePolicy:;
- (void)setSkanParameters:;
- (id)skanParameters;
- (void)setHeader:;
- (id)urlString;
- (BOOL)isEqualToModel:;
- (void)setTimeout:;
- (id)initWithDict:;
- (void).cxx_destruct;
- (long long)timeout;
- (void)setUrlString:;
- (id)header;
@end

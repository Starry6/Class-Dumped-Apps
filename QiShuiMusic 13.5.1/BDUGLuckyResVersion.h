@interface BDUGLuckyResVersion : BDUGLuckyBDModel
@property (nonatomic) q version;
@property (nonatomic) NSString name;
@property (nonatomic) NSString accessKey;
- (void)setName:;
- (void)setVersion:;
- (long long)version;
- (void).cxx_destruct;
- (id)name;
- (id)accessKey;
- (void)setAccessKey:;
+ (id)modelCustomPropertyMapper;
@end

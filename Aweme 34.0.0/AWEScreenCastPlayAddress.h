@interface AWEScreenCastPlayAddress : MTLModel
@property (nonatomic) NSString playUrl;
@property (nonatomic) NSString playBackUrl;
@property (nonatomic) NSString logoType;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) double expiredTime;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPlayUrl:;
- (double)expiredTime;
- (void)setExpiredTime:;
- (id)logoType;
- (void)setLogoType:;
- (id)playUrl;
- (id)playBackUrl;
- (void)setPlayBackUrl:;
- (void)setHeight:;
- (void)setWidth:;
- (long long)width;
- (void).cxx_destruct;
- (long long)height;
+ (id)JSONKeyPathsByPropertyKey;
@end

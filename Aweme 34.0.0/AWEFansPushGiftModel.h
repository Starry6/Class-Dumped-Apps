@interface AWEFansPushGiftModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) q diamondCount;
@property (nonatomic) NSString url;
@property (nonatomic) q count;
- (long long)diamondCount;
- (void)setDiamondCount:;
- (void)setUrl:;
- (void)setCount:;
- (long long)count;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)url;
+ (id)JSONKeyPathsByPropertyKey;
@end

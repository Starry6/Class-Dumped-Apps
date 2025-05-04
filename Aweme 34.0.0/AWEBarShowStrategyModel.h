@interface AWEBarShowStrategyModel : AWEBaseApiModel
@property (nonatomic) q visiableType;
@property (nonatomic) NSArray whiteList;
@property (nonatomic) NSArray blackList;
- (long long)visiableType;
- (void)setVisiableType:;
- (id)whiteList;
- (void)setWhiteList:;
- (id)blackList;
- (void)setBlackList:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

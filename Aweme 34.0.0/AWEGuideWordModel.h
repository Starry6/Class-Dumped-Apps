@interface AWEGuideWordModel : AWEBaseApiModel
@property (nonatomic) NSString word;
@property (nonatomic) NSString searchWord;
@property (nonatomic) q type;
@property (nonatomic) q breatheTimes;
- (id)searchWord;
- (long long)breatheTimes;
- (void)setSearchWord:;
- (void)setBreatheTimes:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)word;
- (void)setWord:;
+ (id)JSONKeyPathsByPropertyKey;
@end

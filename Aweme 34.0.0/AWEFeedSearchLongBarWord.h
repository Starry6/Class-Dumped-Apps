@interface AWEFeedSearchLongBarWord : AWEBaseApiModel
@property (nonatomic) NSString word;
@property (nonatomic) NSString wordId;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString carouselTriggerTime;
@property (nonatomic) double carouselDateDiff;
- (id)carouselTriggerTime;
- (void)setCarouselTriggerTime:;
- (double)carouselDateDiff;
- (void)setCarouselDateDiff:;
- (void).cxx_destruct;
- (id)params;
- (void)setWordId:;
- (id)wordId;
- (id)word;
- (void)setWord:;
- (void)setParams:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWENearbyActivityResourceBaseModel : AWEBaseApiModel
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) AWEURLModel urls;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void)setUrls:;
- (void).cxx_destruct;
- (double)startTime;
- (id)urls;
+ (id)urlsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

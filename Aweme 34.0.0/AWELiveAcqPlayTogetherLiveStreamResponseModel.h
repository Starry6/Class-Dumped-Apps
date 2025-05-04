@interface AWELiveAcqPlayTogetherLiveStreamResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray events;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setEvents:;
- (id)events;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)eventsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

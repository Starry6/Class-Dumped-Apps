@interface AWENearbyActivityTabResourceModel : AWEBaseApiModel
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) AWEURLModel urls;
@property (nonatomic) NSString content;
@property (nonatomic) AWENearbyActivityTextStyleModel textStyle;
- (id)textStyle;
- (id)content;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void)setUrls:;
- (void)setContent:;
- (void).cxx_destruct;
- (double)startTime;
- (id)urls;
- (void)setTextStyle:;
+ (id)urlsJSONTransformer;
+ (id)textStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

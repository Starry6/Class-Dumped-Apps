@interface AWESearchFeelGoodEntranceIconModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel image;
@property (nonatomic) AWEURLModel imageDark;
@property (nonatomic) double iconRadius;
@property (nonatomic) AWESearchFeelGoodIconBottomModel bottom;
@property (nonatomic) double startShowDelayMS;
- (void)setImageDark:;
- (id)imageDark;
- (double)iconRadius;
- (void)setIconRadius:;
- (void)setStartShowDelayMS:;
- (double)startShowDelayMS;
- (id)image;
- (void)setImage:;
- (void)setBottom:;
- (void).cxx_destruct;
- (id)bottom;
+ (id)imageJSONTransformer;
+ (id)bottomJSONTransformer;
+ (id)imageDarkJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

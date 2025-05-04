@interface AWENoticeImageUrlStructModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel imageUrlFirst;
@property (nonatomic) AWEURLModel imageUrlSecond;
- (id)imageUrlFirst;
- (id)imageUrlSecond;
- (void)setImageUrlFirst:;
- (void)setImageUrlSecond:;
- (void).cxx_destruct;
+ (id)imageUrlFirstJSONTransformer;
+ (id)imageUrlSecondJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

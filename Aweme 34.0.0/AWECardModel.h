@interface AWECardModel : AWEImageDecorateViewModel
@property (nonatomic) NSString tagIcon;
@property (nonatomic) NSArray decorateViews;
- (id)tagIcon;
- (void)setTagIcon:;
- (id)decorateViews;
- (void)setDecorateViews:;
- (id)identifier;
- (void).cxx_destruct;
+ (id)decorateViewsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWETheaterNoviceGuideConfig : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) AWEURLModel cover;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cover;
- (void)setCover:;
- (id)subtitle;
- (void)setSubtitle:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)buttonTitle;
- (void)setButtonTitle:;
+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

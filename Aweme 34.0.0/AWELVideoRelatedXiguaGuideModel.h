@interface AWELVideoRelatedXiguaGuideModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

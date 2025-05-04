@interface AWEHotSpotBottomBarInfo : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)modelWithParamDict:;
+ (id)JSONKeyPathsByPropertyKey;
@end

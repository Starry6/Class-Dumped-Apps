@interface AWEClassroomModel.ClassroomBlockModel : MTLModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSArray bannerList;
- (id)bannerList;
- (void)setBannerList:;
- (id)schema;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)bannerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

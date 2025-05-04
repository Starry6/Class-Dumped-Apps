@interface AWEClassroomModel.ClassroomImageModel : MTLModel
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) NSArray urlList;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setHeight:;
- (void)setWidth:;
- (long long)width;
- (void).cxx_destruct;
- (long long)height;
- (id)initWithCoder:;
- (id)urlList;
- (void)setUrlList:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)urlListJSONTransformer;
@end

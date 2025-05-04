@interface AWEEvaluationSamplesModel : MTLModel
@property (nonatomic) NSString videoListName;
@property (nonatomic) NSArray videoList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVideoList:;
- (id)videoList;
- (id)videoListName;
- (void)setVideoListName:;
- (void).cxx_destruct;
+ (id)videoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

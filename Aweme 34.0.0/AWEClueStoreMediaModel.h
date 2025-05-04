@interface AWEClueStoreMediaModel : MTLModel
@property (nonatomic) q source;
@property (nonatomic) AWEClueStoreImageModel imageModel;
@property (nonatomic) AWEClueStoreVideoModel videoModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoModel;
- (void)setVideoModel:;
- (id)imageModel;
- (void)setImageModel:;
- (void).cxx_destruct;
- (long long)source;
- (void)setSource:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
@end

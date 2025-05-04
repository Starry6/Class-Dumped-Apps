@interface AWEAdTwistImageInfo : MTLModel
@property (nonatomic) AWEURLModel coverImageURL;
@property (nonatomic) AWEURLModel guideImageURL;
@property (nonatomic) AWEURLModel progressImageURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guideImageURL;
- (void)setGuideImageURL:;
- (id)progressImageURL;
- (void)setProgressImageURL:;
- (void).cxx_destruct;
- (id)coverImageURL;
- (void)setCoverImageURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end

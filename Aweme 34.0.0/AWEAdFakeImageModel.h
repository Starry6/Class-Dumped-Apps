@interface AWEAdFakeImageModel : MTLModel
@property (nonatomic) NSNumber imageType;
@property (nonatomic) AWEURLModel imageURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setImageType:;
- (id)imageURL;
- (void).cxx_destruct;
- (void)setImageURL:;
- (id)imageType;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

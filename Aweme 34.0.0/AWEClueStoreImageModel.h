@interface AWEClueStoreImageModel : MTLModel
@property (nonatomic) NSString imageURI;
@property (nonatomic) NSArray imageURLs;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHeight:;
- (void)setWidth:;
- (double)width;
- (void).cxx_destruct;
- (double)height;
- (id)imageURLs;
- (void)setImageURLs:;
- (id)imageURI;
- (void)setImageURI:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
@end

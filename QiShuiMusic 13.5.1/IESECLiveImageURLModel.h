@interface IESECLiveImageURLModel : MTLModel
@property (nonatomic) NSString imageURLString;
@property (nonatomic) NSString uri;
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)urlList;
- (id)imageURLString;
- (void)setImageURLString:;
- (void)setUrlList:;
- (id)uri;
- (void)setWidth:;
- (id)height;
- (id)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setUri:;
+ (id)JSONKeyPathsByPropertyKey;
@end

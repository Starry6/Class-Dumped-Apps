@interface AWELuckyCatPopupImageData : MTLModel
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) BOOL enlarge;
@property (nonatomic) AWELuckyCatPopupSpaceModel space;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enlarge;
- (void)setEnlarge:;
- (void)setHeight:;
- (void)setWidth:;
- (id)width;
- (void).cxx_destruct;
- (id)height;
- (id)space;
- (id)imageUrl;
- (void)setImageUrl:;
- (void)setSpace:;
+ (id)spaceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

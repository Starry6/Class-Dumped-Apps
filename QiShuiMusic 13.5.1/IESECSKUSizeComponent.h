@interface IESECSKUSizeComponent : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString icon;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSArray images;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setText:;
- (id)icon;
- (void)setWidth:;
- (id)images;
- (id)height;
- (id)width;
- (void)setHeight:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setImages:;
- (id)text;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;
@end

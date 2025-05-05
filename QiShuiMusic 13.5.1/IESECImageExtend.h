@interface IESECImageExtend : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString type;
@property (nonatomic) NSArray images;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setType:;
- (void)setTitle:;
- (id)images;
- (id)type;
- (id)title;
- (void).cxx_destruct;
- (void)setImages:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;
@end

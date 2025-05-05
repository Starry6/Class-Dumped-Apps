@interface IESECLiveGoodsListHeaderPromotionRightModel : MTLModel
@property (nonatomic) NSArray contents;
@property (nonatomic) IESECLiveGoodsListRotationModel rotationModel;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)setRotationModel:;
- (id)extra;
- (id)contents;
- (void)setContents:;
- (void).cxx_destruct;
- (id)rotationModel;
+ (id)contentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

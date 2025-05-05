@interface IESECWinFeedProductModel : MTLModel
@property (nonatomic) IESECGoodsDetailModel promotion;
@property (nonatomic) NSArray bulletTags;
@property (nonatomic) NSArray comments;
@property (nonatomic) IESECFeedCommentButton commentButton;
@property (nonatomic) NSDictionary ritTags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ritTags;
- (id)bulletTags;
- (id)commentButton;
- (id)promotion;
- (void)setBulletTags:;
- (void)setCommentButton:;
- (void)setPromotion:;
- (void)setRitTags:;
- (void).cxx_destruct;
- (id)comments;
- (void)setComments:;
+ (id)bulletTagsJSONTransformer;
+ (id)commentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

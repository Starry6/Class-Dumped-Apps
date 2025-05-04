@interface AWEDoubleColumnSearchMerchandiseActionButton : MTLModel
@property (nonatomic) AWEURLModel actionIcon;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel actionText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setActionIcon:;
- (void).cxx_destruct;
- (id)actionText;
- (void)setActionText:;
- (id)actionIcon;
+ (id)actionTextJSONTransformer;
+ (id)actionIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

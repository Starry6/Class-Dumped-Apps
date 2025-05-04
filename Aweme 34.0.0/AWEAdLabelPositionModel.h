@interface AWEAdLabelPositionModel : MTLModel
@property (nonatomic) AWELabelPositionModel singleLabelPositionModel;
@property (nonatomic) AWELabelPositionModel dualLabelPositionModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)singleLabelPositionModel;
- (void)setSingleLabelPositionModel:;
- (id)dualLabelPositionModel;
- (void)setDualLabelPositionModel:;
- (void).cxx_destruct;
+ (id)singleLabelPositionModelJSONTransformer;
+ (id)dualLabelPositionModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

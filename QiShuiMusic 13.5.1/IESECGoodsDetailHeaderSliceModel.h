@interface IESECGoodsDetailHeaderSliceModel : IESECBaseApiModel
@property (nonatomic) NSString sliceID;
@property (nonatomic) NSDictionary sliceTemplate;
@property (nonatomic) NSDictionary sliceTemplateData;
@property (nonatomic) IESECHeaderSliceAction showAction;
@property (nonatomic) IESECSliceAction headerShowAction;
- (id)sliceID;
- (id)headerShowAction;
- (void)setHeaderShowAction:;
- (void)setShowAction:;
- (void)setSliceID:;
- (void)setSliceTemplate:;
- (void)setSliceTemplateData:;
- (id)showAction;
- (id)sliceTemplate;
- (id)sliceTemplateData;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

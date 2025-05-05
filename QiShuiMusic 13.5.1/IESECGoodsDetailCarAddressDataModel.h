@interface IESECGoodsDetailCarAddressDataModel : IESECBaseApiModel
@property (nonatomic) IESECLongContentLabelElement title;
@property (nonatomic) IESECTextElement addressTextElement;
@property (nonatomic) IESECTextElement distanceTextElement;
@property (nonatomic) IESECTextElement detailTextElement;
- (id)addressTextElement;
- (id)detailTextElement;
- (id)distanceTextElement;
- (void)setAddressTextElement:;
- (void)setDetailTextElement:;
- (void)setDistanceTextElement:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
